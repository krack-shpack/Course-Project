#ifndef USER
#define USER
#include <QString>
#include <QDataStream>
#include <QMap>
#include <QTextStream>
#include <QDate>
/*!
    \brief Класс пользователя.
    Данный класс существует для осуществления действий над пользователями, включая запись и чтение данных о пользователе.
*/
class Users
{
public:
    /// Набор возможных статусов пользователя
    enum Status { Employee, ///< Статус пользователя - работник
                  Dispatcher , ///< Статус пользователя - диспетчер
                  Admin }; ///< Статус пользователя - администратор
    Users();
    /*!
    Конструктор класса
    \param name имя пользователя
    \param name2  отчество пользователя
    \param surname фамилия пользователя
    \param numberself личный номер пользователя
    \param date Дата рождения
    \param education Образование
    \param profession Профессия
    \param post должность
    \param numberofdevision Номер подразделения
    \param SP семейное положение
    \param numberofkids количество детей
    \param login логин
    \param password пароль
    \param status статус
    */
    Users(const QString &name, const QString &name2, const QString &surname, const QString &numberself, const QDate &date, const QString &education,
         const QString &profession, const QString &post, const QString &numberofdevision,const QString &SP, const int &numberofkids,
         const QString &login, const QString &password, const Status &status);


    /// Метод получения имени пользователя
    const QString &name() const;
    /// Метод получения отчества пользователя
    const QString &name2() const;
    /// Метод получения фамилии пользователя
    const QString &surname() const;
    /// Метод получения личного номера
    const QString &numberself() const;
    /// Метод получения даты рождения
    const QDate &date() const;
    /// Метод получения образования
    const QString &education() const;
    /// Метод получения профессии
    const QString &profession() const;
    /// Метод получения должности
    const QString &post() const;
    /// Метод получения номера подразделения
    const QString &numberofdevision() const;
    /// Метод получения семейного положения
    const QString &SP() const;
    /// Метод получения количества детей
    const int &numberofkids() const;
    /// Метод получения логина
    const QString &login() const;
    /// Метод получения пароля
    const QString &password() const;
    /// Метод получения статуса
    const Status &status() const;
    /// Метод получения статуса строкой
    const QString statusString() const;

    ///Метод установки данных
    void setData(const QString &name, const QString &name2, const QString &surname, const QString &numberself, const QDate &date, const QString &education,
                 const QString &profession, const QString &post, const QString &numberofdevision,const QString &SP, const int &numberofkids,
                 const QString &login, const QString &password, const Status &status);

    /// Метод установки имени
    void setName(const QString &name);
    /// Метод установки отчества
    void setName2(const QString &name2);
    /// Метод установки фамилии
    void setSurname(const QString &surname);
    /// Метод установки личного номера
    void setNumberSelf(const QString &numberself);
    /// Метод установки даты
    void setDate(const QDate &date);
    /// Метод установки образования
    void setEducation(const QString &education);
    /// Метод установки профессии
    void setProfession(const QString &profession);
    /// Метод установки должности
    void setPost(const QString &post);
    /// Метод установки номера подразделения
    void setNumberofdevision(const QString &numberofdevision);
    /// Метод установки семейного положения
    void setSP(const QString &SP);
    /// Метод установки количества детей
    void setNumberofKids(const int &numberofkids);
    /// Метод установки логина
    void setLogin(const QString &login);
    /// Метод установки пароля
    void setPassword(const QString &password);
    /// Метод установки статуса
    void setStatus(const Status &status);
    ///Статический метод, возвращающий список соответствий статуса его строковому типу
    static QMap<Status, QString> getListStatus();
private:
    QString m_name;
    QString m_name2;
    QString m_surname;
    QString m_numberself;
    QDate m_date;
    QString m_education;
    QString m_profession;
    QString m_post;
    QString m_numberofdevision;
    QString m_SP;
    int m_numberofkids;
    QString m_login;
    QString m_password;
    Status m_status;

};

/// Запись пользователя в поток
inline QDataStream &operator<< (QDataStream &ost, const Users &user)
{
    ost << user.name() << user.name2() << user.surname()<< user.numberself() << user.date() << user.education()
        << user.profession() << user.post() << user.numberofdevision()<< user.SP() << user.numberofkids()
        << user.login() << user.password() << user.status();
    return ost;
}

/// Считывание пользователя из потока
inline QDataStream &operator>> (QDataStream &ist, Users &user)
{
    QString name;
    QString name2;
    QString surname;
    QString numberself;
    QDate date;
    QString education;
    QString profession;
    QString post;
    QString numberofdevision;
    QString SP;
    int numberofkids;
    QString login;
    QString password;
    int status;
    ist >> name>>name2>>surname>>numberself>>date>>education>>profession>>post
            >>numberofdevision>>SP>>numberofkids>>login >> password >> status;
    user.setData(name, name2, surname, numberself, date, education, profession, post,
                 numberofdevision, SP, numberofkids, login, password, Users::Status(status));

    return ist;
}

#endif // USER


