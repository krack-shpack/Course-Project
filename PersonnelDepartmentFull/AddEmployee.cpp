#include "AddEmployee.h"
#include "ui_AddEmployee.h"
#include "config.h"
#include "user.h"
#include <division.h>
#include <QComboBox>
#include <QFile>

AddEmployee::AddEmployee(Users *user, const QList<Users> &userlist, Type type, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEmployee),
    m_user(user),
    m_userlist(userlist),
    m_divlist()
{
    ui->setupUi(this);
    m_startNumberEmployee = user->name();
    ui->numberself->setInputMask("+7-000-000-0000");
    if (type == Edit)
    {
        ui->label->setText("Редактирование информации о работнике");
        ui->name->setText(m_user->name());
        ui->name2->setText(m_user->name2());
        ui->surname->setText(m_user->surname());       
        ui->numberself->setText(m_user->numberself());
        ui->date->setDate(m_user->date());
        ui->education->setText(m_user->education());
        ui->profession->setText(m_user->profession());
        ui->post->setText(m_user->post());
        ui->SP->setCurrentText(m_user->SP());
        ui->numberkids->setValue(m_user->numberofkids());
        ui->login->setText(m_user->login());
        ui->passw->setText(m_user->password());
        ui->status->setCurrentText(m_user->statusString());

    }
    else
    {
        ui->label->setText("Добавление информации о работнике");
        if (DispatcherAdd())
        {
            ui->status->hide();
            ui->label_4->hide();
        }
    }
    loaddivision();
}


AddEmployee::~AddEmployee()
{
    delete ui;
}

bool AddEmployee::isLoginExists(const QString &login,int count)
{
    //Загружаем данные о пользователях
    QFile file(Config::Usersbin);
    if (file.exists())
    {
        if (!file.open(QIODevice::ReadOnly))
        {
            ui->error->setText("Ошибка: чтение файла невозможно!");
            return false;
        }

        QDataStream ist(&file);
        while (!ist.atEnd())
        {
            Users user;
            ist >> user;
            if (user.login() == login)
                count++;
        }
        if (count>1)
            return true;
        else
            return false;
    }
    else
        return false;
}

bool AddEmployee::DispatcherAdd()
{
    int count=0;
    //Загружаем данные о пользователях
    QFile file(Config::Usersbin);
    if (file.exists())
    {
        if (!file.open(QIODevice::ReadOnly))
        {
            ui->error->setText("Ошибка: чтение файла невозможно!");
            return false;
        }

        QDataStream ist(&file);
        while (!ist.atEnd())
        {
            Users user;
            ist >> user;
            if (user.statusString() == "Диспетчер")
                count++;
        }
        if (count==0)
            return true;
        else
            return false;
    }
    else
        return false;
}


void AddEmployee::loaddivision()
{
    m_divlist.clear();
    QFile file(Config::DivBin);
    if (file.open(QIODevice::ReadOnly))
    {
        QDataStream ist(&file);
        while (!ist.atEnd())
        {
            Divisions div;
            ist >> div;
            m_divlist.append(div);
        }
    }
    foreach (const Divisions &div, m_divlist)
    {
        ui->numberofdevision->addItems(QStringList () << div.NumberOfDivision());
    }

}
void AddEmployee::on_numberofdevision_currentIndexChanged(const QString &text)
{
    foreach (const Divisions &div, m_divlist)
    {
        if (div.NumberOfDivision()==text)
        {
            ui->nameofdiv->setText(div.NameofDivision());
            ui->director->setText(div.Director());
        }
    }
}

void AddEmployee::accept()
{
    ui->error->clear();


    int SPIndex = ui->SP->currentIndex();
    QString SPString;
            switch(SPIndex)
            {
            case 1:
                SPString="Холост/Не замужем";
                break;
            case 2:
                 SPString="Женат/Замужем";
                break;
            }
    const QString SP =SPString;

    int Statusindex = ui->status->currentIndex();
    QString Statusstring;
            switch(Statusindex)
            {
            case 1:
                Statusstring="Диспетчер";
                break;
            case 2:
                 Statusstring="Работник";
                break;
            }
    if (DispatcherAdd())
    {
        Statusstring="Диспетчер";
    }
    Users::Status status = Users::getListStatus().key(ui->status->currentText());

    if (Statusstring=="Диспетчер")
     status=Users::Dispatcher;
    else if (Statusstring=="Работник")
    status=Users::Employee;
    else status=Users::Admin;

    int count=0;
    QString name = ui->name->text();
    QString name2 = ui->name2->text();
    QString surname = ui->surname->text();
    QString numberself = ui->numberself->text();
    QDate date = ui->date->date();
    QString education = ui->education->text();
    QString profession = ui->profession->text();
    QString post = ui->post->text();
    QString numberofdivision=ui->numberofdevision->currentText();
    int numberkids = ui->numberkids->value();
    QString login = ui->login->text();
    QString passw = ui->passw->text();
    QString label = ui->label->text();
    if (label=="Добавление информации о работнике") count=1;
    else count=0;

    if (name.isEmpty()||name2.isEmpty()||numberself.isEmpty()
            ||education.isEmpty()||profession.isEmpty()||post.isEmpty())
    {
        ui->error->setText("Ошибка: укажите все личные данные!");
    }
    else if (numberself=="+7-000-000-0000"||numberself=="+7---"||numberself.size()<15)
        ui->error->setText("Ошибка: укажите правильный номер телефона!");
    else if (ui->numberofdevision->currentIndex()==0)
        ui->error->setText("Ошибка: Выберите подразделение!");
    else if (SPIndex==0)
        ui->error->setText("Ошибка: Выберите семейное положение!");
    else if (Statusindex==0&&!DispatcherAdd())
        ui->error->setText("Ошибка: Выберите статус!");
    else if (login.isEmpty())
        ui->error->setText("Ошибка: Укажите логин!");
    else if (passw.isEmpty())
        ui->error->setText("Ошибка: Укажите пароль!");
    else if (isLoginExists(login,count))
            ui->error->setText("Ошибка: Логин уже существует!");
    else
    {
        m_user->setData(name,
                        name2,
                        surname,
                        numberself,
                        date,
                        education,
                        profession,
                        post,
                        numberofdivision,
                        SP,
                        numberkids,
                        login,
                        passw,
                        status);
        QDialog::accept();
    }
}

