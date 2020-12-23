#include "user.h"

//ost << user.name() << user.name2() << user.surname()<< user.numberself() << user.date() << user.education()
  //  << user.profession() << user.post() << user.numberofdevision()<< user.SP() << user.numberofkids()
    //<< user.login() << user.password() << user.status();
Users::Users()
{
}
Users::Users(const QString &name, const QString &name2, const QString &surname, const QString &numberself, const QDate &date, const QString &education,
             const QString &profession, const QString &post, const int &numberofdevision,const QString &SP, const int &numberofkids,
             const QString &login, const QString &password, const Status &status)
{
    m_name=name;
    m_name2=name2;
    m_surname=surname;
    m_numberself=numberself;
    m_date=date;
    m_education=education;
    m_profession=profession;
    m_post=post;
    m_numberofdevision=numberofdevision;
    m_SP=SP;
    m_numberofkids=numberofkids;
    m_login = login;
    m_password = password;
    m_status = status;
}
const QString &Users::name() const
{
    return m_name;
}
const QString &Users::name2() const
{
    return m_name2;
}
const QString &Users::surname() const
{
    return m_surname;
}
const QString &Users::numberself() const
{
    return m_numberself;
}
const QDate &Users::date() const
{
    return m_date;
}
const QString &Users::education() const
{
    return m_education;
}
const QString &Users::profession() const
{
    return m_profession;
}
const QString &Users::post() const
{
    return m_post;
}
const int &Users::numberofdevision() const
{
    return m_numberofdevision;
}
const QString &Users::SP() const
{
    return m_SP;
}
const int &Users::numberofkids() const
{
    return m_numberofkids;
}
const QString &Users::login() const
{
    return m_login;
}

const QString &Users::password() const
{
    return m_password;
}

const Users::Status &Users::status() const
{
    return m_status;
}

const QString Users::statusString() const
{
    return getListStatus()[m_status];
}

void Users::setData(const QString &name, const QString &name2, const QString &surname, const QString &numberself, const QDate &date, const QString &education,
                    const QString &profession, const QString &post, const int &numberofdevision,const QString &SP, const int &numberofkids,
                    const QString &login, const QString &password, const Status &status)
{
    m_name=name;
    m_name2=name2;
    m_surname=surname;
    m_numberself=numberself;
    m_date=date;
    m_education=education;
    m_profession=profession;
    m_post=post;
    m_numberofdevision=numberofdevision;
    m_SP=SP;
    m_numberofkids=numberofkids;
    m_login = login;
    m_password = password;
    m_status = status;
}
void Users::setName(const QString &name)
{
    m_name=name;
}
void Users::setName2(const QString &name2)
{
     m_name2=name2;
}
void Users::setSurname(const QString &surname)
{
    m_surname=surname;
}
void Users::setNumberSelf(const QString &numberself)
{
    m_numberself=numberself;
}
void Users::setDate(const QDate &date)
{
    m_date=date;
}
void Users::setEducation(const QString &education)
{
     m_education=education;
}
void Users::setProfession(const QString &profession)
{
     m_profession=profession;
}
void Users::setPost(const QString &post)
{
     m_post=post;
}
void Users::setNumberofdevision(const int &numberofdevision)
{
    m_numberofdevision=numberofdevision;
}
void Users::setSP(const QString &SP)
{
     m_SP=SP;
}
void Users::setNumberofKids(const int &numberofkids)
{
     m_numberofkids=numberofkids;
}

void Users::setLogin(const QString &login)
{
    m_login = login;
}

void Users::setPassword(const QString &password)
{
    m_password = password;
}

void Users::setStatus(const Status &status)
{
    m_status = status;
}

QMap<Users::Status, QString> Users::getListStatus()
{
    return QMap<Status, QString>
            (
    {
        { Employee, "Работник" },
        { Dispatcher, "Диспетчер"},
        { Admin, "Администратор" }
    }
            );
}

