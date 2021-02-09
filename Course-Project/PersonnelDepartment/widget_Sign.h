#ifndef WIDGET_SIGN_H
#define WIDGET_SIGN_H
#include <QWidget>
class Users;

namespace Ui {
class Sign;
}
class Sign : public QWidget
{
    Q_OBJECT

public:
    explicit Sign(QWidget *parent = nullptr);
    ~Sign();

private:
    Ui::Sign *ui;
    Users *checkUser(const QString &login, const QString &password);

signals:
    void succesfulEntry(Users*);

private slots:
    void on_in_clicked();
    void on_info_clicked();
};
#endif // WIDGET_SIGN_H
