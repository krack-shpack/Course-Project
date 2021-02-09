#include <QtTest>

#include "../PersonnelDepartment/user.h"
#include "../PersonnelDepartment/division.h"

#include <QDataStream>

class PersonnelDepartmentTests : public QObject
{
    Q_OBJECT

public:
    PersonnelDepartmentTests();
    ~PersonnelDepartmentTests();

private slots:
    void userReadWrite();
    void divisionReadWrite();

};

PersonnelDepartmentTests::PersonnelDepartmentTests()
{

}

PersonnelDepartmentTests::~PersonnelDepartmentTests()
{

}

void PersonnelDepartmentTests::userReadWrite() {
    QDataStream stream;

    Users u1("name", "name2", "surname", "0", QDate(10,10,2000), "education",
             "profession", "post", "0", "SP", 0,
             "login", "password", Users::Admin);
    Users u2;

    {
        QFile f("test.bin");
        f.open(QIODevice::WriteOnly);
        stream.setDevice(&f);

        stream << u1;

        stream.setDevice(nullptr);
    }

    {
        QFile f("test.bin");
        f.open(QIODevice::ReadOnly);
        stream.setDevice(&f);

        stream >> u2;

        f.remove();
    }

    QVERIFY(u1.login() == u2.login() && u1.status() == u2.status());
}

void PersonnelDepartmentTests::divisionReadWrite() {
    QDataStream stream;

    Divisions d1("division1", "Div. 1", "U. U. G.");
    Divisions d2;

    {
        QFile f("test.bin");
        f.open(QIODevice::WriteOnly);
        stream.setDevice(&f);

        stream << d1;

        stream.setDevice(nullptr);
    }

    {
        QFile f("test.bin");
        f.open(QIODevice::ReadOnly);
        stream.setDevice(&f);

        stream >> d2;

        f.remove();
    }

    QVERIFY(d1.NumberOfDivision() == d2.NumberOfDivision() &&
            d1.NameofDivision() == d2.NameofDivision() &&
            d1.Director() == d2.Director());
}

QTEST_APPLESS_MAIN(PersonnelDepartmentTests)

#include "tst_personneldepartmenttests.moc"
