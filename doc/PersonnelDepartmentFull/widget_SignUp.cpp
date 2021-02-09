#include "ui_widget_SignUp.h"
#include "widget_SignUp.h"
#include <widget_Sign.h>
#include "config.h"
#include "user.h"
#include "signals.h"
#include <QFile>
#include <QDataStream>

SignUp::SignUp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}


void SignUp::on_Registr_clicked()
{
        ui->label_error->clear();
        const QString login = ui->login->text();
        const QString password = ui->passw->text();
        const QString repeatPassword = ui->repeat->text();

        //проверка на корректность
        if (login.isEmpty())
            ui->label_error->setText("Ошибка: Укажите логин!");
        else if (password.isEmpty())
            ui->label_error->setText("Ошибка: Укажите пароль!");
        else if (repeatPassword.isEmpty())
            ui->label_error->setText("Ошибка: Заполните поле: Повторение пароля!");
        else if (login.size() < 6 || login.size() > 20) //Проверяется соответствие длины логина
        {
            ui->label_error->setText("Ошибка: Слишком короткое имя пользователя!");
        }
        else if (password.size() < 6 || password.size() > 20)
        {
            ui->label_error->setText("Ошибка: Слишком короткий пароль!");
        }
        else if (password != repeatPassword)
        {
            ui->label_error->setText("Ошибка: пароли не совпадают!");
        }
        else
        {
            Users users("name",
                        "name2",
                        "surname",
                        0,
                        QDate(10,10,2000),
                        "education",
                        "profession",
                        "post",
                        0,
                        "SP",
                        0,
                        login,
                        password,
                        Users::Admin);

            QFile file(Config::Usersbin);
            file.open(QIODevice::Append);
            QDataStream ost(&file);
            ost << users;

            emit openAuthorization();
        }
}
