#ifndef SIGNUP_H
#define SIGNUP_H
#include <QWidget>

namespace Ui {
class SignUp;
}

class SignUp : public QWidget
{
    Q_OBJECT

public:

    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();
private:
    Ui::SignUp *ui;

signals:
    void openAuthorization();
private slots:
    void on_Registr_clicked();

};
#endif // SIGNUP_H

