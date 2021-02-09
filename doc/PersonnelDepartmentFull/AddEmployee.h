#ifndef ADDUSERS_H
#define ADDUSERS_H

#include <QDialog>
#include <user.h>
#include <division.h>
class Users;

namespace Ui {
class AddEmployee;
}
/*!
    \brief Класс добавления работника.
    Данный класс существует для добавления работника администратором или диспетчером.
*/
class AddEmployee : public QDialog
{
    Q_OBJECT

public:
    /// Набор действий с работниками
    enum Type { Create, ///< Указывает, что производится создание
                Edit ///< Указывает, что производится редактирование
              };

    /*!
    Конструктор класса добавления работника
    \param user пользователь с данными
    \param userlist список пользователей
    \param type тип действия, прозиводимого над пользователем
    \param parent ссылка на родительский объект
    */
    explicit AddEmployee(Users *user,const QList<Users> &userlist, Type type, QWidget *parent = nullptr);
    ~AddEmployee();
private:
    Ui::AddEmployee *ui;
    QString m_startNumberEmployee;
    Users *m_user;
    const QList<Users> &m_userlist;;
    QList<Divisions> m_divlist;

public slots:
    /*! \brief Логическая функция, проверяющая существует ли логин
             \param login Логин работника
             \param count количество
             \returns Существует логин или нет
        */
    bool isLoginExists(const QString &login, int count);
    /// считает количество диспетчеров
    bool DispatcherAdd();
    /// Функция определяющая порядок действий после нажатия кнопки "принять"
    void accept();
    /// Функция "одгружающая" подразделения
    void loaddivision();

private slots:
    void on_numberofdevision_currentIndexChanged(const QString &arg1);
};


#endif // ADDUSERS_H
