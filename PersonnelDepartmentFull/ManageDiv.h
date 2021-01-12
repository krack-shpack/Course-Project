#ifndef MANAGEDIV_H
#define MANAGEDIV_H
#include <QDialog>
#include "division.h"
class Divisions;
namespace Ui {
class ManageDiv;
}

class ManageDiv : public QDialog
{
    Q_OBJECT

public:

    explicit ManageDiv(QWidget *parent = nullptr);
    ~ManageDiv();

public slots:

private slots:

    void on_adddiv_clicked();

    void on_deletediv_clicked();
    
private:
    Ui::ManageDiv *ui;


signals:

};

#endif // MANAGEDIV_H
