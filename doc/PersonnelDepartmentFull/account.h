#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <QDialog>

class Users;

namespace Ui {
class Account;
}
/*!
    \brief Класс перенаправления к личному кабинету.
*/
class Account : public QDialog
{
    Q_OBJECT

public:
    /*!
    Конструктор класса
    \param user ссылка на пользователя с данными о нем
    \param parent ссылка на родительский объект
    */
     explicit Account(Users &user, QWidget *parent = nullptr);
    ~Account();

private slots:

    void on_aboutuser_clicked();

    void on_aboutempl_clicked();

private:
    Ui::Account *ui;
    Users &m_user;
};
#endif // ACCOUNT_H
