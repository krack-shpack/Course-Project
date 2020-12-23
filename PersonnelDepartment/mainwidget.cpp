#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <user.h>
#include <account.h>
#include <config.h>
#include <Manage.h>
#include <QFile>
#include <QDataStream>
#include <QDebug>
#include <QDateTime>
#include <QMessageBox>

MainWidget::MainWidget(Users &user, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
    , m_user(user)
{
    ui->setupUi(this);
    ui->TableEmpl->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::ResizeToContents);
    m_infoDialog = new Account(m_user, this);
    m_infoDialog->setWindowTitle(Config::nameApplication);

    if (m_user.status() == Users::Employee)
        ui->Manage->hide();

    loadUsers();
}
const QList<Users> &MainWidget::userlist() const
{
    return m_userlist;
}

const Users &MainWidget::user()const
{
    return m_user;
}

MainWidget::~MainWidget()
{
    delete ui;
    delete m_infoDialog;
    delete &m_user;
}


void MainWidget::on_User_clicked()
{
    if (m_infoDialog->exec() == QDialog::Accepted)
         emit changeUser();
}

void MainWidget::on_Manage_clicked()
{
    const QList<Users> &userlist = qobject_cast<MainWidget*>(this)->userlist();
    const Users &user();
    QString Status=m_user.statusString();
    Manage dialog(Status,userlist, this);

    dialog.setWindowTitle(windowTitle());
        connect(&dialog, SIGNAL(addUsers(Users)),
                this, SLOT(addUsers(Users)));

        connect(&dialog, SIGNAL(EditUsers(int, Users)),
                this, SLOT(EditUsers(int, Users)));

        connect(&dialog, SIGNAL(deleteUsers(int)),
                this, SLOT(deleteUsers(int)));
    dialog.exec();
}

QString MainWidget::GetNameDiv(int numberofdevision)
{
    QString nameofdivision;
    if (numberofdevision==1)
       nameofdivision="Отдел кадров";
    else if (numberofdevision==2)
       nameofdivision="Бухгалтерия";
    else if (numberofdevision==3)
        nameofdivision="Юридический отдел";
    else if (numberofdevision==4)
        nameofdivision="Плановый отдел";
    else if (numberofdevision==5)
        nameofdivision="Технический отдел";
    else if (numberofdevision==6)
        nameofdivision="Финансовый отдел";
    else if (numberofdevision==7)
        nameofdivision="Транспортный цех";
    else
        nameofdivision="Неизвестно";
    return nameofdivision;
}
QString MainWidget::GetDirector(int numberofdevision)
{
    QString Director;
    if (numberofdevision==1)
       Director="Пряхин К.Т";
    else if (numberofdevision==2)
       Director="Брюханова Н.В.";
    else if (numberofdevision==3)
        Director="Павловец А.В.";
    else if (numberofdevision==4)
        Director="Зандер В.А.";
    else if (numberofdevision==5)
        Director="Иванова Н.П.";
    else if (numberofdevision==6)
        Director="Бондар В.В.";
    else if (numberofdevision==7)
        Director="Корякина Г.Ф.";
    else
        Director="Неизвестно";
    return Director;
}

void MainWidget::loadUsers()
{
    m_userlist.clear(); //очистка листа

    //считывание с файла
    QFile file(Config::Usersbin);
    if (file.open(QIODevice::ReadOnly)) {
        QDataStream ist(&file);
        while (!ist.atEnd()) {
            Users user;
            ist >> user;
            m_userlist.append(user);
        }
    }

    int row = 0;
    foreach (const Users &user, m_userlist)
    {
        QTableWidgetItem *item_name = new QTableWidgetItem(user.name());
        QTableWidgetItem *item_name2 = new QTableWidgetItem(user.name2());
        QTableWidgetItem *item_surname = new QTableWidgetItem(user.surname());
        QTableWidgetItem *item_numberself = new QTableWidgetItem(user.numberself());
        QTableWidgetItem *item_date = new QTableWidgetItem(user.date().toString("dd.MM.yyyy"));
        QTableWidgetItem *item_education = new QTableWidgetItem(user.education());
        QTableWidgetItem *item_profession = new QTableWidgetItem(user.profession());
        QTableWidgetItem *item_post = new QTableWidgetItem(user.post());
        QTableWidgetItem *item_numberofdivision = new QTableWidgetItem(QString("№%1").arg(user.numberofdevision()));
        QTableWidgetItem *item_SP = new QTableWidgetItem(user.SP());
        QTableWidgetItem *item_numberofkids = new QTableWidgetItem(QString("%1").arg(user.numberofkids()));
        QTableWidgetItem *item_nameofdivision = new QTableWidgetItem(GetNameDiv(user.numberofdevision()));
        QTableWidgetItem *item_rykovoditel = new QTableWidgetItem(GetDirector(user.numberofdevision()));

        ui->TableEmpl->insertRow(row);

        ui->TableEmpl->setItem(row, 0, item_name);
        ui->TableEmpl->setItem(row, 1, item_name2);
        ui->TableEmpl->setItem(row, 2, item_surname);
        ui->TableEmpl->setItem(row, 3, item_numberself);
        ui->TableEmpl->setItem(row, 4, item_date);
        ui->TableEmpl->setItem(row, 5, item_education);
        ui->TableEmpl->setItem(row, 6, item_profession);
        ui->TableEmpl->setItem(row, 7, item_post);
        ui->TableEmpl->setItem(row, 8, item_numberofdivision);
        ui->TableEmpl->setItem(row, 9, item_SP);
        ui->TableEmpl->setItem(row, 10, item_numberofkids);
        ui->TableEmpl->setItem(row, 11, item_nameofdivision);
        ui->TableEmpl->setItem(row, 12, item_rykovoditel);
        row++;
    }
}

void MainWidget::addUsers(Users user)
{
    m_userlist.append(user);

    QFile file(Config::Usersbin);
    file.open(QIODevice::Append);
    QDataStream ost(&file);
    ost << user;

        QTableWidgetItem *item_name = new QTableWidgetItem(user.name());
        QTableWidgetItem *item_name2 = new QTableWidgetItem(user.name2());
        QTableWidgetItem *item_surname = new QTableWidgetItem(user.surname());
        QTableWidgetItem *item_numberself = new QTableWidgetItem(user.numberself());
        QTableWidgetItem *item_date = new QTableWidgetItem(user.date().toString("dd.MM.yyyy"));
        QTableWidgetItem *item_education = new QTableWidgetItem(user.education());
        QTableWidgetItem *item_profession = new QTableWidgetItem(user.profession());
        QTableWidgetItem *item_post = new QTableWidgetItem(user.post());
        QTableWidgetItem *item_numberofdivision = new QTableWidgetItem(QString("№%1").arg(user.numberofdevision()));
        QTableWidgetItem *item_SP = new QTableWidgetItem(user.SP());
        QTableWidgetItem *item_numberofkids = new QTableWidgetItem(QString("%1").arg(user.numberofkids()));
        QTableWidgetItem *item_nameofdivision = new QTableWidgetItem(GetNameDiv(user.numberofdevision()));
        QTableWidgetItem *item_rykovoditel = new QTableWidgetItem(GetDirector(user.numberofdevision()));

        int row = ui->TableEmpl->rowCount();
        ui->TableEmpl->insertRow(row);

        ui->TableEmpl->setItem(row, 0, item_name);
        ui->TableEmpl->setItem(row, 1, item_name2);
        ui->TableEmpl->setItem(row, 2, item_surname);
        ui->TableEmpl->setItem(row, 3, item_numberself);
        ui->TableEmpl->setItem(row, 4, item_date);
        ui->TableEmpl->setItem(row, 5, item_education);
        ui->TableEmpl->setItem(row, 6, item_profession);
        ui->TableEmpl->setItem(row, 7, item_post);
        ui->TableEmpl->setItem(row, 8, item_numberofdivision);
        ui->TableEmpl->setItem(row, 9, item_SP);
        ui->TableEmpl->setItem(row, 10, item_numberofkids);
        ui->TableEmpl->setItem(row, 11, item_nameofdivision);
        ui->TableEmpl->setItem(row, 12, item_rykovoditel);
}

void MainWidget::EditUsers(int row, Users user)
{
    m_userlist[row] = user;
    QFile file(Config::Usersbin);
    if (file.open(QIODevice::ReadOnly))
    {
        QFile write_file("file");
        write_file.open(QIODevice::WriteOnly);


        QDataStream read_ist(&file);
        QDataStream write_ist(&write_file);

        int countSeats = 0;

        while (!read_ist.atEnd())
        {
            Users usera;
            read_ist >> usera;

            if (countSeats++ == row)
            {
                usera = user;
            }

            write_ist << usera;
        }

        file.close();
        file.remove();

        write_file.close();
        write_file.rename(Config::Usersbin);
    }

    ui->TableEmpl->item(row, 0)->setText(user.name());
    ui->TableEmpl->item(row, 1)->setText(user.name2());
    ui->TableEmpl->item(row, 2)->setText(user.surname());
    ui->TableEmpl->item(row, 3)->setText(user.numberself());
    ui->TableEmpl->item(row, 4)->setText(user.date().toString("dd.MM.yyyy"));
    ui->TableEmpl->item(row, 5)->setText(user.education());
    ui->TableEmpl->item(row, 6)->setText(user.profession());
    ui->TableEmpl->item(row, 7)->setText(user.post());
    ui->TableEmpl->item(row, 8)->setText(QString("№%1").arg(user.numberofdevision()));
    ui->TableEmpl->item(row, 9)->setText(user.SP());
    ui->TableEmpl->item(row, 10)->setText(QString("%1").arg(user.numberofkids()));
    ui->TableEmpl->item(row, 11)->setText(GetNameDiv(user.numberofdevision()));
    ui->TableEmpl->item(row, 12)->setText(GetDirector(user.numberofdevision()));

}


void MainWidget::deleteUsers(int row)
{
    m_userlist.removeAt(row);

    //Перезапись данных
    QFile file(Config::Usersbin);
    if (file.open(QIODevice::ReadOnly))
    {
        QFile write_file("file");
        write_file.open(QIODevice::WriteOnly);

        QDataStream read_ist(&file);
        QDataStream write_ist(&write_file);

        int countReads = 0;

        while (!read_ist.atEnd())
        {
            Users usera;
            read_ist >> usera;
            if (countReads++ != row)
            {
                write_ist << usera;
            }
        }

        file.close();
        file.remove();

        write_file.close();
        write_file.rename(Config::Usersbin);
    }
    ui->TableEmpl->removeRow(row);
}



void MainWidget::on_Find_textChanged(const QString &find)
{
    QStringList listStr = find.split(" ");
    listStr.removeAll(QString());

    for (int i = 0; i < m_userlist.size(); i++) {
        ui->TableEmpl->showRow(i);
    }
    int row = 0;
    foreach (const Users &user, m_userlist) {
        int count = 0;
        foreach (const QString &str, listStr) {
            if (user.name().contains(str)
                    ||user.name2().contains(str)
                    ||user.surname().contains(str)
                    ||user.date().toString("dd.MM.yyyy").contains(str)
                    ||user.education().contains(str)
                    ||user.profession().contains(str)
                    ||user.post().contains(str)
                    ||QString("№%1").arg(user.numberofdevision()).contains(str)
                    ||user.SP().contains(str)
                    ||QString("%1").arg(user.numberofkids()).contains(str)
                    ||GetNameDiv(user.numberofdevision()).contains(str)
                    ||GetDirector(user.numberofdevision()).contains(str)
                    ) {
                count++;
            }
        }
        if (count != listStr.size()) {
            ui->TableEmpl->hideRow(row);
        }
        row++;
    }
}
