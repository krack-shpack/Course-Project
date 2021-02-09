#ifndef SIGNALS_H
#define SIGNALS_H
#include <QWidget>
class Users;
/*!
    \brief Класс сигналов.
    Каждый сигнал определяет какое окно и когда будет открыто пользователю.
*/
class Signals : public QWidget
{
    Q_OBJECT

public:
    /*!
    Конструктор класса главного окна
    \param parent ссылка на родительский объект
    */
    Signals(QWidget *parent = nullptr);
    ~Signals();

private:
    QWidget *m_currentWidget;

private slots:
    void Authorization();
    void slotMainWidget(Users*);
};
#endif // SIGNALS_H
