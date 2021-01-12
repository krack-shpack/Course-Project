#ifndef ABOUTEMPL_H
#define ABOUTEMPL_H
#include <QDialog>
#include <division.h>
class Users;

namespace Ui {
class aboutempl;
}

class aboutempl : public QDialog
{
    Q_OBJECT

public:
     explicit aboutempl(const Users &user, QWidget *parent = nullptr);
    ~aboutempl();

    QString GetName(QString numberofdevision);
    QString GetDirect(QString numberofdevision);
public slots:

private slots:

private:
    Ui::aboutempl *ui;
    QList<Divisions> m_divlist;
};
#endif // ABOUTEMPL_H
