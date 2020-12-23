#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <user.h>
#include <QTableWidgetItem>
class Account;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWidget; }
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(Users &user, QWidget *parent = nullptr);
    ~MainWidget();

    QString GetNameDiv(int numberofdevision);
    QString GetDirector(int numberofdevision);
    const QList<Users> &userlist() const;
    const Users &user() const;
public slots:
    void addUsers(Users user);
    void EditUsers(int row, Users user);
    void deleteUsers(int row);

private slots:
    void on_User_clicked();
    void on_Manage_clicked();
    void on_Find_textChanged(const QString &text);

signals:
    void changeUser();
private:
    Ui::MainWidget *ui;
    Users &m_user;
    Account *m_infoDialog;
    QList<Users> m_userlist;
    void loadUsers();
};
#endif
