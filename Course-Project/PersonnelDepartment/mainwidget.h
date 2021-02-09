#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <user.h>
#include <division.h>
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

    const QList<Users> &userlist() const;
    const Users &user() const;
public slots:
    QString GetName(QString numberofdevision);
    QString GetDirect(QString numberofdevision);
    void addUsers(Users user);
    void EditUsers(int row, Users user);
    void deleteUsers(int row);
private slots:
    void on_User_clicked();
    void on_Manage_clicked();
    void on_Find_textChanged(const QString &text);

    void on_Div_clicked();

signals:
    void changeUser();
private:
    Ui::MainWidget *ui;
    Users &m_user;
    Account *m_infoDialog;
    QList<Users> m_userlist;
    QList<Divisions> m_divlist;

    void loadUsers();

};
#endif
