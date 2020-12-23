#ifndef ADDUSERS_H
#define ADDUSERS_H

#include <QDialog>
#include <user.h>
class Users;

namespace Ui {
class AddEmployee;
}

class AddEmployee : public QDialog
{
    Q_OBJECT

public:
    enum Type { Create, Edit };

    explicit AddEmployee(Users *user,const QList<Users> &userlist, Type type, QWidget *parent = nullptr);
    ~AddEmployee();

private:
    Ui::AddEmployee *ui;
    QString m_startNumberEmployee;
    Users *m_user;
    const QList<Users> &m_userlist;;


public slots:
    bool isLoginExists(const QString &login, int count);
    bool DispatcherAdd();
    void accept();
};


#endif // ADDUSERS_H
