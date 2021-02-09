#ifndef MANAGE_H
#define MANAGE_H
#include <QDialog>
#include "user.h"
#include <division.h>
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
    QString GetName(QString numberofdevision);
    QString GetDirect(QString numberofdevision);
private slots:
    void on_adduser_clicked();
    void on_deleteuser_clicked();
    void on_edituser_clicked();
    void on_Find_textChanged(const QString &arg1);

private:
    Ui::Manage *ui;
    const QList<Users> &m_userlist;
    QList<Divisions> m_divlist;

signals:
    void addUsers(Users);
    void EditUsers(int, Users);
    void deleteUsers(int);
    int countUsers() const;
     void loaddivision();

};
#endif // MANAGE_H
