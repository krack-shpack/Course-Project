#ifndef ABOUTUSER_H
#define ABOUTUSER_H
#include <QDialog>

class Users;

namespace Ui {
class aboutuser;
}

class aboutuser : public QDialog
{
    Q_OBJECT

public:
     explicit aboutuser(const Users &user, QWidget *parent = nullptr);
    ~aboutuser();

private slots:

private:
    Ui::aboutuser *ui;
};
#endif // ABOUTUSER_H
