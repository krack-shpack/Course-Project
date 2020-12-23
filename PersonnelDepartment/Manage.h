#ifndef MANAGE_H
#define MANAGE_H
#include <QDialog>
#include "user.h"
class Users;
namespace Ui {
class Manage;
}

class Manage : public QDialog
{
    Q_OBJECT

public:

    explicit Manage(QString Status, const QList<Users> &userlist, QWidget *parent = nullptr);
    ~Manage();

public slots:
    QString GetNameDiv(int numberofdevision);
    QString GetDirector(int numberofdevision);
private slots:
//    void on_lineFind_textChanged(const QString &arg1);

    void on_adduser_clicked();
    void on_deleteuser_clicked();
    void on_edituser_clicked();


    void on_Find_textChanged(const QString &arg1);

private:
    Ui::Manage *ui;
    const QList<Users> &m_userlist;

signals:
    void addUsers(Users);
    void EditUsers(int, Users);
    void deleteUsers(int);
    int countUsers() const;

};
#endif // MANAGE_H
