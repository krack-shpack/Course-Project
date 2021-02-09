#include "aboutempl.h"
#include "ui_aboutempl.h"
#include "user.h"
#include "mainwidget.h"
#include <Manage.h>
#include <QFile>
#include "config.h"

aboutempl::aboutempl(const Users &user, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutempl),
    m_divlist()
{
    ui->setupUi(this);

     ui->name->setText(user.name());
     ui->name2->setText(user.name2());
     ui->surname->setText(user.surname());
     ui->numberself->setText(user.numberself());
     ui->date->setText(user.date().toString("dd.MM.yyyy"));
     ui->education->setText(user.education());
     ui->profession->setText(user.profession());
     ui->post->setText(user.post());
     ui->numberofdivision->setText(QString("№%1").arg(user.numberofdevision()));
     ui->SP->setText(user.SP());     
     ui->numberofkids->setText(QString("%1").arg(user.numberofkids()));
     ui->nameofdivision->setText(GetName(user.numberofdevision()));
     ui->rykovoditel->setText(GetDirect(user.numberofdevision()));

}

aboutempl::~aboutempl()
{
    delete ui;
}
QString aboutempl::GetName(QString numberofdevisions)
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
QString aboutempl::GetDirect(QString numberofdevisions)
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

