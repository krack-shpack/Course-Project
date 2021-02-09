#ifndef ABOUTEMPL_H
#define ABOUTEMPL_H
#include <QDialog>
#include <division.h>
class Users;

namespace Ui {
class aboutempl;
}
/*!
    \brief Класс получения информаии по личному кабинету работника.
*/
class aboutempl : public QDialog
{
    Q_OBJECT

public:
    /*!
    Конструктор класса
    \param user ссылка на работника с данными о нем
    \param parent ссылка на родительский объект
    */
     explicit aboutempl(const Users &user, QWidget *parent = nullptr);
    ~aboutempl();

    ///Метод получения имени подразделения
    QString GetName(QString numberofdevision);
    ///Метод получения управляющего подразделения
    QString GetDirect(QString numberofdevision);
public slots:

private slots:

private:
    Ui::aboutempl *ui;
    QList<Divisions> m_divlist;
};
#endif // ABOUTEMPL_H
