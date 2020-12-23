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
    ui->label->setText("Регистрация администратора");
    ui->numberself->setInputMask("+7-000-000-0000");
}

SignUp::~SignUp()
{
    delete ui;
}


void SignUp::on_Registr_clicked()
{
        ui->label_error->clear();

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

        const QString name = ui->name->text();
        const QString name2 = ui->name2->text();
        const QString surname = ui->surname->text();
        const QString numberself = ui->numberself->text();
        const QDate date = ui->date->date();
        const QString education = ui->education->text();
        const QString profession = ui->profession->text();
        const QString post = ui->post->text();
        const int numberofdevision = ui->SP->currentIndex();;
        const QString SP =SPString;
        const int numberofkids = ui->numberkids->value();
        const QString login = ui->login->text();
        const QString password = ui->passw->text();
        const QString repeatPassword = ui->repeat->text();

        //проверка на корректность
        if (name.isEmpty()||name2.isEmpty()
                ||education.isEmpty()||profession.isEmpty()||post.isEmpty())
        {
            ui->label_error->setText("Ошибка: укажите все личные данные!");
        }
        else if (numberself=="+7-000-000-0000"||numberself=="+7---"||numberself.size()<15)
            ui->label_error->setText("Ошибка: укажите правильный номер телефона!");
        else if (SPIndex==0)
            ui->label_error->setText("Ошибка: Выберите семейное положение!");
        else if (ui->numberofdevision->currentIndex()==0)
            ui->label_error->setText("Ошибка: Выберите номер подразделения!");
        else if (login.isEmpty())
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
            Users users(name,
                        name2,
                        surname,
                        numberself,
                        date,
                        education,
                        profession,
                        post,
                        numberofdevision,
                        SP,
                        numberofkids,
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
