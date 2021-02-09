#ifndef DIVISION_H
#define DIVISION_H
#include <QString>
#include <QDataStream>
class Divisions
{
public:

    Divisions();
    Divisions(const QString &NumberOfDivision, const QString &NameOfDivision, const QString &Director);


    const QString &NumberOfDivision() const;
    const QString &NameofDivision() const;
    const QString &Director() const;

    void setData(const QString &NumberOfDivision, const QString &NameOfDivision, const QString &Director);

    void setNumberOfDivision(const QString &NumberOfDivision);
    void setName(const QString &NameOfDivision);
    void setDirector(const QString &Director);

private:
    QString m_NumberOfDivision;
    QString m_name;
    QString m_Director;
};

// Запись пользователя в поток
inline QDataStream &operator<< (QDataStream &ost, const Divisions &Division)
{
    ost << Division.NumberOfDivision() <<Division.NameofDivision()<< Division.Director();
    return ost;
}

// Считывание пользователя из потока
inline QDataStream &operator>> (QDataStream &ist, Divisions &Division)
{
    QString NumberOfDivision;
    QString name;
    QString Director;

    ist >> NumberOfDivision>>name>>Director;
    Division.setData(NumberOfDivision, name, Director);
    return ist;
}

#endif // DIVISION_H
