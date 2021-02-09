#ifndef MANAGEDIV_H
#define MANAGEDIV_H
#include <QDialog>
#include "division.h"
class Divisions;
namespace Ui {
class ManageDiv;
}
/*!
    \brief Класс управления подразделениями.
    Данное окно содержит в себе список подразделений и кнопки для управления ими.
*/
class ManageDiv : public QDialog
{
    Q_OBJECT

public:
    /*!
    Конструктор класса главного окна
    \param parent ссылка на родительский объект
    */
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
