#ifndef SIGNUP_H
#define SIGNUP_H
#include <QWidget>

namespace Ui {
class SignUp;
}
/*!
    \brief Класс регистрации.
    Данный класс предназначен для регистрации пользователей.
*/
class SignUp : public QWidget
{
    Q_OBJECT

public:
    /*!
    Конструктор класса регистрации
    \param parent ссылка на родительский объект
    */
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();
private:
    Ui::SignUp *ui;

signals:
    void openAuthorization(); ///< Сигнал оповещающий о необходимости открытия окна авторизации
private slots:
    void on_Registr_clicked();

};
#endif // SIGNUP_H

