#include "addDiv.h"
#include "ui_addDiv.h"
#include "config.h"
#include "division.h"
#include <QFile>
#include <QRegExpValidator>
AddDivision::AddDivision(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDivision)
{
    ui->setupUi(this);
    setWindowTitle(Config::nameApplication);
    ui->number->setValidator(new QRegExpValidator(QRegExp("[0-9]{5}")));
}


AddDivision::~AddDivision()
{
    delete ui;
}
const Divisions &AddDivision::getDiv() const
{
    return s_division;
}


bool AddDivision::isDivEx(const QString &number)
{
    QFile file(Config::DivBin);
    if (file.exists())
    {
        if (!file.open(QIODevice::ReadOnly))
        {
            ui->error->setText("Ошибка: Невозможно открыть файл!");
            return false;
        }

        QDataStream ist(&file);
        while (!ist.atEnd())
        {
            Divisions divis;
            ist >> divis;
            if (divis.NumberOfDivision()  == number)
                return true;
        }
            return false;
    }
    else
        return false;
}
void AddDivision::accept()
{
    ui->error->clear();

    const QString number = ui->number->text();
    const QString director = ui->director->text();
    const QString name = ui->nameq->text();

    if (number.isEmpty()||name.isEmpty()||director.isEmpty())

    {
        ui->error->setText("Ошибка: Необходимо заполнить все поля!");
    }
    else if (isDivEx(number))
    {
        ui->error->setText("Ошибка: Номер заданного отдела уже существует!");
    }
    else if (number<1)
    {
        ui->error->setText("Ошибка: Введите коректный номер");
    }
    else
    {
        s_division.setData(number,name,director);
        QDialog::accept();

    }
}
