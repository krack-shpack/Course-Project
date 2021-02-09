#ifndef ADDDIV_H
#define ADDDIV_H
#include <QDialog>
#include <division.h>
class Divisions;

namespace Ui {
class AddDivision;
}
/*!
    \brief Класс добавления подразделения.
    Данный класс существует для добавления подразделения или его удаления.
*/
class AddDivision : public QDialog
{
    Q_OBJECT

public:
    /*!
    Конструктор класса добавления рейса
    \param parent ссылка на родительский объект
    */
    explicit AddDivision(QWidget *parent = nullptr);
    ~AddDivision();

    ///Получение подразделения
    const Divisions &getDiv() const;
private:
    Ui::AddDivision *ui;
    Divisions s_division;

public slots:
    /*! \brief Логическая функция, проверяющая существует ли подразделение
             \param number Номер подразделения
             \returns Существует подразделение или нет
        */
    bool isDivEx(const QString &number);
     /// Функция определяющая порядок действий после нажатия кнопки "принять"
    void accept();
};
#endif // ADDDIV_H
