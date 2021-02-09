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

/*!
    \brief Класс главного окна.
    Главное окно - основное окно пользователя, оно содержит в себе основные кнопки управления подразделениями, работниками и информации о личном кабинете.
*/
class MainWidget : public QWidget
{
    Q_OBJECT

public:
    /*!
    Конструктор класса главного окна
    \param user ссылка на пользователя со всеми данными о нем
    \param parent ссылка на родительский объект
    */
    explicit MainWidget(Users &user, QWidget *parent = nullptr);
    ~MainWidget();

    /// Список пользователей
    const QList<Users> &userlist() const;
    /// Данные о пользователе
    const Users &user() const;
public slots:
    /*! \brief Функция получения имени подразделения
             \param numberofdevision номер дивизиона
        */
    QString GetName(QString numberofdevision);
    /*! \brief Функция получения данных о руководящем подразделения
             \param numberofdevision номер дивизиона
        */
    QString GetDirect(QString numberofdevision);
    /*! \brief Функция добавления пользователя
             \param user пользователь
        */
    void addUsers(Users user);
    /*! \brief Функция редактирования пользователя
             \param row строка, выбранного пользователя
             \param user пользователь
        */
    void EditUsers(int row, Users user);
    /*! \brief Функция удаления пользователя
             \param row строка, выбранного пользователя
        */
    void deleteUsers(int row);
private slots:
    void on_User_clicked();
    void on_Manage_clicked();
    void on_Find_textChanged(const QString &text);

    void on_Div_clicked();

signals:
    void changeUser(); ///< Сигнал сообщающий о смене пользователе

private:
    Ui::MainWidget *ui;
    Users &m_user;
    Account *m_infoDialog;
    QList<Users> m_userlist;
    QList<Divisions> m_divlist;

    void loadUsers();

};
#endif
