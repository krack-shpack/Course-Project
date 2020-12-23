#include "aboutempl.h"
#include "ui_aboutempl.h"
#include "user.h"
#include "mainwidget.h"
#include <Manage.h>
aboutempl::aboutempl(const Users &user, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutempl)

{
    ui->setupUi(this);

    QString str,str2;
    str.setNum(user.numberofdevision());
    str2.setNum(user.numberofkids());
     ui->name->setText(user.name());
     ui->name2->setText(user.name2());
     ui->surname->setText(user.surname());
     ui->numberself->setText(user.numberself());
     ui->date->setText(user.date().toString("dd.MM.yyyy"));
     ui->education->setText(user.education());
     ui->profession->setText(user.profession());
     ui->post->setText(user.post());
     ui->numberofdivision->setText(QString("%1").arg(user.numberofdevision()));
     ui->SP->setText(user.SP());     
     ui->numberofkids->setText(QString("%1").arg(user.numberofkids()));
     ui->nameofdivision->setText(GetNameDiv(user.numberofdevision()));
     ui->rykovoditel->setText(GetDirector(user.numberofdevision()));

}

aboutempl::~aboutempl()
{
    delete ui;
}

QString aboutempl::GetNameDiv(int numberofdevision)
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
QString aboutempl::GetDirector(int numberofdevision)
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
