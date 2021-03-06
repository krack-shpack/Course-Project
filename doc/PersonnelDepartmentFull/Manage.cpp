#include "Manage.h"
#include "ui_Manage.h"

#include "config.h"
#include <QMessageBox>
#include <QFile>
#include <division.h>
#include <QDataStream>
#include <mainwidget.h>
#include <widget_SignUp.h>
#include <widget_Sign.h>
#include <AddEmployee.h>
#include <widget_SignUp.h>
Manage::Manage(QString Status, const QList<Users> &userlist, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Manage),
    m_userlist(userlist),
    m_divlist()
{
    ui->setupUi(this);
    ui->Table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::ResizeToContents); // Устанавливка ширины столбцов под размер содержимого
    loaddivision();
            if (Status=="Диспетчер")
        {
            ui->adduser->hide();
            ui->deleteuser->hide();
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
        QTableWidgetItem *item_nameofdivision = new QTableWidgetItem(GetName(user.numberofdevision()));
        QTableWidgetItem *item_rykovoditel = new QTableWidgetItem(GetDirect(user.numberofdevision()));

        ui->Table->insertRow(row);
        ui->Table->setItem(row, 0, item_name);
        ui->Table->setItem(row, 1, item_name2);
        ui->Table->setItem(row, 2, item_surname);
        ui->Table->setItem(row, 3, item_numberself);
        ui->Table->setItem(row, 4, item_date);
        ui->Table->setItem(row, 5, item_education);
        ui->Table->setItem(row, 6, item_profession);
        ui->Table->setItem(row, 7, item_post);
        ui->Table->setItem(row, 8, item_numberofdivision);
        ui->Table->setItem(row, 9, item_SP);
        ui->Table->setItem(row, 10, item_numberofkids);
        ui->Table->setItem(row, 11, item_nameofdivision);
        ui->Table->setItem(row, 12, item_rykovoditel);
        row++;
    }

}

Manage::~Manage()
{
    delete ui;

}

QString Manage::GetName(QString numberofdevisions)
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

    QString nameofdiv="nameofdiv";
    foreach (const Divisions &div, m_divlist)
    {
        if (numberofdevisions==div.NumberOfDivision())
           nameofdiv =div.NameofDivision();
    }
    return nameofdiv;
}
QString Manage::GetDirect(QString numberofdevisions)
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
    QString director="director";
    foreach (const Divisions &div, m_divlist)
    {
        if (div.NumberOfDivision()==numberofdevisions)
            director =div.Director();
    }
    return director;
}




void Manage::on_adduser_clicked()
{
    Users user;
        AddEmployee dialog(&user, m_userlist, AddEmployee::Create, this);
        dialog.setWindowTitle(windowTitle());

        if (dialog.exec() == QDialog::Accepted)
        {
            emit addUsers(user);

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
            QTableWidgetItem *item_nameofdivision = new QTableWidgetItem(GetName(user.numberofdevision()));
            QTableWidgetItem *item_rykovoditel = new QTableWidgetItem(GetDirect(user.numberofdevision()));

            int row = ui->Table->rowCount();
            ui->Table->insertRow(row);

            ui->Table->setItem(row, 0, item_name);
            ui->Table->setItem(row, 1, item_name2);
            ui->Table->setItem(row, 2, item_surname);
            ui->Table->setItem(row, 3, item_numberself);
            ui->Table->setItem(row, 4, item_date);
            ui->Table->setItem(row, 5, item_education);
            ui->Table->setItem(row, 6, item_profession);
            ui->Table->setItem(row, 7, item_post);
            ui->Table->setItem(row, 8, item_numberofdivision);
            ui->Table->setItem(row, 9, item_SP);
            ui->Table->setItem(row, 10, item_numberofkids);
            ui->Table->setItem(row, 11, item_nameofdivision);
            ui->Table->setItem(row, 12, item_rykovoditel);
        }
}

void Manage::on_deleteuser_clicked()
{
    int currentRow = ui->Table->currentRow();
         if (currentRow==-1)
            QMessageBox::warning(this, windowTitle(), "Ошибка: не выбран ни один пользователь!");
        else
           {
               emit deleteUsers(currentRow);
               ui->Table->removeRow(currentRow);
           }
}

void Manage::on_edituser_clicked()
{
        int currentRow = ui->Table->currentRow();
        if (currentRow != -1)
        {
            Users user = m_userlist[currentRow];
            AddEmployee dialog(&user, m_userlist, AddEmployee::Edit, this);
            dialog.setWindowTitle(windowTitle());

            if (dialog.exec() == QDialog::Accepted)
            {
                emit EditUsers(currentRow, user);

                ui->Table->item(currentRow, 0)->setText(user.name());
                ui->Table->item(currentRow, 1)->setText(user.name2());
                ui->Table->item(currentRow, 2)->setText(user.surname());
                ui->Table->item(currentRow, 3)->setText(user.numberself());
                ui->Table->item(currentRow, 4)->setText(user.date().toString("dd.MM.yyyy"));
                ui->Table->item(currentRow, 5)->setText(user.education());
                ui->Table->item(currentRow, 6)->setText(user.profession());
                ui->Table->item(currentRow, 7)->setText(user.post());
                ui->Table->item(currentRow, 8)->setText(QString("№%1").arg(user.numberofdevision()));
                ui->Table->item(currentRow, 9)->setText(user.SP());
                ui->Table->item(currentRow, 10)->setText(QString("%1").arg(user.numberofkids()));
                ui->Table->item(currentRow, 11)->setText(GetName(user.numberofdevision()));
                ui->Table->item(currentRow, 12)->setText(GetDirect(user.numberofdevision()));
            }
        }
        else {
            QMessageBox::warning(this, windowTitle(), "Ошибка: не выбран ни один пользователь!");
        }
}

void Manage::on_Find_textChanged(const QString &find)
{
    QStringList listStr = find.split(" ");
    listStr.removeAll(QString());

    for (int i = 0; i < m_userlist.size(); i++) {
        ui->Table->showRow(i);
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
                    ||user.numberofdevision().contains(str)
                    ||user.SP().contains(str)
                    ||QString("%1").arg(user.numberofkids()).contains(str)
                    ||GetName(user.numberofdevision()).contains(str)
                    ||GetDirect(user.numberofdevision()).contains(str)
                    ) {
                count++;
            }
        }
        if (count != listStr.size()) {
            ui->Table->hideRow(row);
        }
        row++;
    }
}
