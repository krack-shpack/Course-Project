#ifndef USER
#define USER
#include <QString>
#include <QDataStream>
#include <QMap>
#include <QTextStream>
#include <QDate>
class Users
{
public:
    enum Status { Employee, Dispatcher , Admin };
    Users();
    Users(const QString &name, const QString &name2, const QString &surname, const QString &numberself, const QDate &date, const QString &education,
         const QString &profession, const QString &post, const int &numberofdevision,const QString &SP, const int &numberofkids,
         const QString &login, const QString &password, const Status &status);


    const QString &name() const;
    const QString &name2() const;
    const QString &surname() const;
    const QString &numberself() const;
    const QDate &date() const;
    const QString &education() const;
    const QString &profession() const;
    const QString &post() const;
    const int &numberofdevision() const;
    const QString &SP() const;
    const int &numberofkids() const;
    const QString &login() const;
    const QString &password() const;
    const Status &status() const;
    const QString statusString() const;

    void setData(const QString &name, const QString &name2, const QString &surname, const QString &numberself, const QDate &date, const QString &education,
                 const QString &profession, const QString &post, const int &numberofdevision,const QString &SP, const int &numberofkids,
                 const QString &login, const QString &password, const Status &status);

    void setName(const QString &name);
    void setName2(const QString &name2);
    void setSurname(const QString &surname);
    void setNumberSelf(const QString &numberself);
    void setDate(const QDate &date);
    void setEducation(const QString &education);
    void setProfession(const QString &profession);
    void setPost(const QString &post);
    void setNumberofdevision(const int &numberofdevision);
    void setSP(const QString &SP);
    void setNumberofKids(const int &numberofkids);
    void setLogin(const QString &login);
    void setPassword(const QString &password);
    void setStatus(const Status &status);

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
    int m_numberofdevision;
    QString m_SP;
    int m_numberofkids;
    QString m_login;
    QString m_password;
    Status m_status;

};

// Запись пользователя в поток
inline QDataStream &operator<< (QDataStream &ost, const Users &user)
{
    ost << user.name() << user.name2() << user.surname()<< user.numberself() << user.date() << user.education()
        << user.profession() << user.post() << user.numberofdevision()<< user.SP() << user.numberofkids()
        << user.login() << user.password() << user.status();
    return ost;
}

// Считывание пользователя из потока
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
    int numberofdevision;
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


