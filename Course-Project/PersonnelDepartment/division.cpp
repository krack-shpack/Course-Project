#include "division.h"

Divisions::Divisions()
{
}
Divisions::Divisions(const QString &numberofdivision, const QString &NameOfDivision, const QString &director)
{
    m_NumberOfDivision=numberofdivision;
    m_name=NameOfDivision;
    m_Director=director;

}
const QString &Divisions::NumberOfDivision() const
{
    return m_NumberOfDivision;
}
const QString &Divisions::NameofDivision() const
{
    return m_name;
}
const QString &Divisions::Director() const
{
    return m_Director;
}

void Divisions::setData(const QString &numberofdivision, const QString &NameOfDivision, const QString &director)
{
    m_NumberOfDivision=numberofdivision;
    m_name=NameOfDivision;
    m_Director=director;
}
void Divisions::setNumberOfDivision(const QString &NumberOfDivision)
{
    m_NumberOfDivision=NumberOfDivision;
}
void Divisions::setName(const QString &NameOfDivision)
{
     m_name=NameOfDivision;
}
void Divisions::setDirector(const QString &Director)
{
     m_Director=Director;
}
