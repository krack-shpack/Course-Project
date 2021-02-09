#include "ManageDiv.h"
#include "ui_ManageDiv.h"
#include <config.h>
#include <mainwidget.h>
#include <addDiv.h>
#include <division.h>

#include <QMessageBox>
#include <QFile>
#include <QDataStream>

ManageDiv::ManageDiv(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManageDiv)
{
    ui->setupUi(this);
    setWindowTitle(Config::nameApplication);
    QFile file(Config::DivBin);
    if (file.open(QIODevice::ReadOnly))
    {
        QDataStream ist(&file);
        int row = 0;
    while (!ist.atEnd())
    {
        Divisions div;
        ist >> div;
            QTableWidgetItem *item_number= new QTableWidgetItem(div.NumberOfDivision());
            QTableWidgetItem *item_name= new QTableWidgetItem(div.NameofDivision());
            QTableWidgetItem *item_director= new QTableWidgetItem(div.Director());

            ui->TableOfDiv->insertRow(row);
            ui->TableOfDiv->setItem(row, 0, item_number);
            ui->TableOfDiv->setItem(row, 1, item_name);
            ui->TableOfDiv->setItem(row, 2, item_director);
            row++;
        }
    }
}

ManageDiv::~ManageDiv()
{
    delete ui;
}

void ManageDiv::on_adddiv_clicked()
{
    AddDivision dialog(this);
    dialog.setWindowTitle(Config::nameApplication);

    if (dialog.exec() == QDialog::Accepted)
    {
        const Divisions &division = dialog.getDiv();
        QFile file(Config::DivBin);
        file.open(QIODevice::Append);
        QDataStream ost(&file);

        ost << division;
        QTableWidgetItem *item_number= new QTableWidgetItem(division.NumberOfDivision());
        QTableWidgetItem *item_name= new QTableWidgetItem(division.NameofDivision());
        QTableWidgetItem *item_director= new QTableWidgetItem(division.Director());

        int row = ui->TableOfDiv->rowCount();
        ui->TableOfDiv->insertRow(row);

        ui->TableOfDiv->setItem(row, 0, item_number);
         ui->TableOfDiv->setItem(row, 1, item_name);
        ui->TableOfDiv->setItem(row, 2, item_director);
    }
}

void ManageDiv::on_deletediv_clicked()
{
    int currentRow = ui->TableOfDiv->currentRow();
    if (currentRow != -1)
    {
        const QString number = ui->TableOfDiv->item(currentRow, 0)->text();
        const QString name = ui->TableOfDiv->item(currentRow, 1)->text();
        const QString director = ui->TableOfDiv->item(currentRow, 2)->text();

        ui->TableOfDiv->removeRow(currentRow);

        QFile file(Config::DivBin);
        if (file.open(QIODevice::ReadOnly))
        {
            QFile write_file("buf_file");
            write_file.open(QIODevice::WriteOnly);

            QDataStream read_ist(&file);
            QDataStream write_ist(&write_file);

            while (!read_ist.atEnd())
            {
                Divisions div;
                read_ist >> div;

                if (QString("%1").arg(div.NumberOfDivision()) != number)
                {
                    write_ist << div;
                }
            }

            file.close();
            file.remove();
            write_file.close();
            write_file.rename(Config::DivBin);
        }
    }
    else
    {
        QMessageBox::warning(this, windowTitle(),
                             "Ошибка: Нечего удалять!");
    }
}


