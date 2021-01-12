#include "widget_Sign.h"
#include "ui_widget_Sign.h"

#include "config.h"
#include "user.h"

#include <QFile>
#include <QDataStream>
#include <QMessageBox>

Sign::Sign(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sign)
{
    ui->setupUi(this);
    this->resize(400, 300);
}

Sign::~Sign()
{
    delete ui;
}


Users *Sign::checkUser(const QString &login, const QString &password)
{
    QFile file(Config::Usersbin);
    if (file.exists())
    {
        Users *user = nullptr;

        if (!file.open(QIODevice::ReadOnly))
        {
            ui->error->setText("Ошибка: открытие файла невозможно!");
            return nullptr;
        }

        QDataStream ist(&file);

        while (!ist.atEnd())
        {
            Users users;
            ist >> users;
            if (users.login() == login && users.password() == password)
            {
                user = new Users(users);
                return user;
            }
        }

        return user;
    }
    else
        return nullptr;
}


void Sign::on_in_clicked()
{
    ui->error->clear();

    const QString login = ui->login->text();
    const QString password = ui->passw->text();

    if (login.isEmpty() || password.isEmpty())
    {
        ui->error->setText("Ошибка: заполните все поля!");
    }
    else if (login.size() < 6 || login.size() > 20)
    {
        ui->error->setText("Ошибка: слишком короткое имя пользователя!");
    }
    else if (password.size() < 6 || password.size() > 20)
    {
        ui->error->setText("Ошибка: слишком короткий пароль!");
    }
    else
        {
        Users *user = checkUser(login, password);

        if (!checkUser(login, password)) ui->error->setText("Ошибка: Проверка пользователя не пройдена!");
        if (user == nullptr)
        {
            ui->error->setText("Ошибка: неправильный логин или пароль!");
        }
        else
        {
            emit succesfulEntry(user);
        }

    }
}

void Sign::on_info_clicked()
{
    QMessageBox aboutDlg(this);
     aboutDlg.setWindowTitle(Config::nameApplication);
     aboutDlg.setIcon(QMessageBox::Information);
     aboutDlg.setText(tr("<br> Если вы хотите устроиться на работу, обратитесь к администратору!"));
      aboutDlg.exec();
}
