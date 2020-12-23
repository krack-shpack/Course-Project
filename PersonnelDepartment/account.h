#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <QDialog>

class Users;

namespace Ui {
class Account;
}

class Account : public QDialog
{
    Q_OBJECT

public:
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
