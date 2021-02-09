#ifndef MANAGE_H
#define MANAGE_H
#include <QDialog>
#include "user.h"
#include <division.h>
class Users;
namespace Ui {
class Manage;
}
/*!
    \brief Класс управления пользователями.
    Данный класс предназначен для управления пользователями.
*/
class Manage : public QDialog
{
    Q_OBJECT

public:
    /*!
    Конструктор класса главного окна
    \param Status статус пользователя
    \param userlist список пользователей
    \param parent ссылка на родительский объект
    */
    explicit Manage(QString Status, const QList<Users> &userlist, QWidget *parent = nullptr);
    ~Manage();

public slots:
    /// Метод получения имени подразделения по номеру
    QString GetName(QString numberofdevision);
    /// Метод получения руководителя подразделения по его номеру
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
    void addUsers(Users); ///<Сигнал отправляемый при добавлении нового пользователя, посылает добавленный пользователь
    void EditUsers(int, Users);///<Сигнал отправляемый при редактировании  пользователя, посылает добавленный пользователь
    void deleteUsers(int); ///<Сигнал отправляемый при удалении  пользователя, посылает добавленный пользователь
     void loaddivision(); ///< Подгружает список подразделений

};
#endif // MANAGE_H
