#ifndef ABOUTEMPL_H
#define ABOUTEMPL_H
#include <QDialog>

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

public slots:
    QString GetNameDiv(int numberofdevision);
    QString GetDirector(int numberofdevision);

private slots:

private:
    Ui::aboutempl *ui;
};
#endif // ABOUTEMPL_H
