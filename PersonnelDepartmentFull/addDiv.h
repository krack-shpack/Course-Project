#ifndef ADDDIV_H
#define ADDDIV_H
#include <QDialog>
#include <division.h>
class Divisions;

namespace Ui {
class AddDivision;
}

class AddDivision : public QDialog
{
    Q_OBJECT

public:
    enum Type { Create, Edit };
    explicit AddDivision(QWidget *parent = nullptr);
    ~AddDivision();

    const Divisions &getDiv() const;
private:
    Ui::AddDivision *ui;
    Divisions s_division;

public slots:
    bool isDivEx(const QString &number);
    void accept();
};
#endif // ADDDIV_H
