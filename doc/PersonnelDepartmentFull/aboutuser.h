#ifndef ABOUTUSER_H
#define ABOUTUSER_H
#include <QDialog>

class Users;

namespace Ui {
class aboutuser;
}
/*!
    \brief Класс получения информаии по личному кабинету пользователя.
*/
class aboutuser : public QDialog
{
    Q_OBJECT

public:
    /*!
    Конструктор класса
    \param user ссылка на пользователя с данными о нем
    \param parent ссылка на родительский объект
    */
     explicit aboutuser(const Users &user, QWidget *parent = nullptr);
    ~aboutuser();

private slots:

private:
    Ui::aboutuser *ui;
};
#endif // ABOUTUSER_H
