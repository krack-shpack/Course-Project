#ifndef SIGNALS_H
#define SIGNALS_H
#include <QWidget>
class Users;
class Signals : public QWidget
{
    Q_OBJECT

public:
    Signals(QWidget *parent = nullptr);
    ~Signals();

private:
    QWidget *m_currentWidget;

private slots:
    void Authorization();
    void slotMainWidget(Users*);
};
#endif // SIGNALS_H
