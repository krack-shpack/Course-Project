#ifndef DIVISION_H
#define DIVISION_H
#include <QString>
#include <QDataStream>
/*!
    \brief Класс подразделения.
    Данный класс существует для получения и записи данных о подразделении.
*/
class Divisions
{
public:

    Divisions();
    /*!
    Конструктор класса
    \param NumberOfDivision номер подразделения
    \param NameOfDivision название подразделения
    \param Director руководящий подрзаделением
    */
    Divisions(const QString &NumberOfDivision, const QString &NameOfDivision, const QString &Director);


    /// Метод получения номера подразделения
    const QString &NumberOfDivision() const;
    /// Метод получения имени подразделения
    const QString &NameofDivision() const;
    /// Метод получения данных о руководящем
    const QString &Director() const;

    ///Метод установки данных
    void setData(const QString &NumberOfDivision, const QString &NameOfDivision, const QString &Director);

    /// Метод установки данных номера подразделения
    void setNumberOfDivision(const QString &NumberOfDivision);
    /// Метод установки имени подразделения
    void setName(const QString &NameOfDivision);
    /// Метод установки данных о руководителе
    void setDirector(const QString &Director);

private:
    QString m_NumberOfDivision;
    QString m_name;
    QString m_Director;
};

/// Запись данных подразделения в поток
inline QDataStream &operator<< (QDataStream &ost, const Divisions &Division)
{
    ost << Division.NumberOfDivision() <<Division.NameofDivision()<< Division.Director();
    return ost;
}

/// Считывание данных подразделения из потока
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
