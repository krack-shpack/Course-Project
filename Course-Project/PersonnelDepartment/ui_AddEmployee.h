/********************************************************************************
** Form generated from reading UI file 'AddEmployee.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEMPLOYEE_H
#define UI_ADDEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddEmployee
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QPushButton *accept;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLineEdit *name;
    QLabel *label_6;
    QLineEdit *name2;
    QLabel *label_7;
    QLineEdit *surname;
    QLabel *label_8;
    QLineEdit *numberself;
    QLabel *label_9;
    QDateEdit *date;
    QLabel *label_10;
    QLineEdit *education;
    QLabel *label_11;
    QLineEdit *profession;
    QLabel *label_12;
    QLineEdit *post;
    QLabel *label_13;
    QComboBox *numberofdevision;
    QLabel *label_14;
    QComboBox *SP;
    QLabel *label_15;
    QSpinBox *numberkids;
    QLabel *label_2;
    QLineEdit *login;
    QLabel *label_3;
    QLineEdit *passw;
    QLabel *label_4;
    QComboBox *status;
    QLabel *label_16;
    QLabel *nameofdiv;
    QLabel *label_18;
    QLabel *director;
    QLabel *label;
    QLabel *error;

    void setupUi(QDialog *AddEmployee)
    {
        if (AddEmployee->objectName().isEmpty())
            AddEmployee->setObjectName(QString::fromUtf8("AddEmployee"));
        AddEmployee->resize(410, 600);
        AddEmployee->setMaximumSize(QSize(418, 16777215));
        gridLayout = new QGridLayout(AddEmployee);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        accept = new QPushButton(AddEmployee);
        accept->setObjectName(QString::fromUtf8("accept"));
        QFont font;
        font.setPointSize(12);
        accept->setFont(font);

        gridLayout_2->addWidget(accept, 0, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        cancel = new QPushButton(AddEmployee);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setFont(font);

        gridLayout_2->addWidget(cancel, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_5 = new QLabel(AddEmployee);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        name = new QLineEdit(AddEmployee);
        name->setObjectName(QString::fromUtf8("name"));
        name->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, name);

        label_6 = new QLabel(AddEmployee);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        name2 = new QLineEdit(AddEmployee);
        name2->setObjectName(QString::fromUtf8("name2"));
        name2->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, name2);

        label_7 = new QLabel(AddEmployee);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        surname = new QLineEdit(AddEmployee);
        surname->setObjectName(QString::fromUtf8("surname"));
        surname->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, surname);

        label_8 = new QLabel(AddEmployee);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        numberself = new QLineEdit(AddEmployee);
        numberself->setObjectName(QString::fromUtf8("numberself"));
        numberself->setFont(font);
        numberself->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhNoTextHandles);
        numberself->setEchoMode(QLineEdit::Normal);

        formLayout->setWidget(3, QFormLayout::FieldRole, numberself);

        label_9 = new QLabel(AddEmployee);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_9);

        date = new QDateEdit(AddEmployee);
        date->setObjectName(QString::fromUtf8("date"));
        date->setFont(font);
        date->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        date->setMaximumDateTime(QDateTime(QDate(2002, 12, 31), QTime(23, 59, 59)));
        date->setMinimumDateTime(QDateTime(QDate(1900, 1, 1), QTime(0, 0, 0)));

        formLayout->setWidget(4, QFormLayout::FieldRole, date);

        label_10 = new QLabel(AddEmployee);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_10);

        education = new QLineEdit(AddEmployee);
        education->setObjectName(QString::fromUtf8("education"));
        education->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, education);

        label_11 = new QLabel(AddEmployee);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_11);

        profession = new QLineEdit(AddEmployee);
        profession->setObjectName(QString::fromUtf8("profession"));
        profession->setFont(font);

        formLayout->setWidget(6, QFormLayout::FieldRole, profession);

        label_12 = new QLabel(AddEmployee);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_12);

        post = new QLineEdit(AddEmployee);
        post->setObjectName(QString::fromUtf8("post"));
        post->setFont(font);

        formLayout->setWidget(7, QFormLayout::FieldRole, post);

        label_13 = new QLabel(AddEmployee);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_13);

        numberofdevision = new QComboBox(AddEmployee);
        numberofdevision->addItem(QString());
        numberofdevision->setObjectName(QString::fromUtf8("numberofdevision"));
        numberofdevision->setFont(font);

        formLayout->setWidget(8, QFormLayout::FieldRole, numberofdevision);

        label_14 = new QLabel(AddEmployee);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        formLayout->setWidget(11, QFormLayout::LabelRole, label_14);

        SP = new QComboBox(AddEmployee);
        SP->addItem(QString());
        SP->addItem(QString());
        SP->addItem(QString());
        SP->setObjectName(QString::fromUtf8("SP"));
        SP->setFont(font);

        formLayout->setWidget(11, QFormLayout::FieldRole, SP);

        label_15 = new QLabel(AddEmployee);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        formLayout->setWidget(12, QFormLayout::LabelRole, label_15);

        numberkids = new QSpinBox(AddEmployee);
        numberkids->setObjectName(QString::fromUtf8("numberkids"));
        numberkids->setFont(font);

        formLayout->setWidget(12, QFormLayout::FieldRole, numberkids);

        label_2 = new QLabel(AddEmployee);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(13, QFormLayout::LabelRole, label_2);

        login = new QLineEdit(AddEmployee);
        login->setObjectName(QString::fromUtf8("login"));
        login->setFont(font);

        formLayout->setWidget(13, QFormLayout::FieldRole, login);

        label_3 = new QLabel(AddEmployee);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(14, QFormLayout::LabelRole, label_3);

        passw = new QLineEdit(AddEmployee);
        passw->setObjectName(QString::fromUtf8("passw"));
        passw->setFont(font);
        passw->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(14, QFormLayout::FieldRole, passw);

        label_4 = new QLabel(AddEmployee);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        formLayout->setWidget(15, QFormLayout::LabelRole, label_4);

        status = new QComboBox(AddEmployee);
        status->addItem(QString());
        status->addItem(QString());
        status->addItem(QString());
        status->setObjectName(QString::fromUtf8("status"));
        status->setFont(font);

        formLayout->setWidget(15, QFormLayout::FieldRole, status);

        label_16 = new QLabel(AddEmployee);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        formLayout->setWidget(9, QFormLayout::LabelRole, label_16);

        nameofdiv = new QLabel(AddEmployee);
        nameofdiv->setObjectName(QString::fromUtf8("nameofdiv"));
        nameofdiv->setFont(font);

        formLayout->setWidget(9, QFormLayout::FieldRole, nameofdiv);

        label_18 = new QLabel(AddEmployee);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        formLayout->setWidget(10, QFormLayout::LabelRole, label_18);

        director = new QLabel(AddEmployee);
        director->setObjectName(QString::fromUtf8("director"));
        director->setFont(font);

        formLayout->setWidget(10, QFormLayout::FieldRole, director);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);

        label = new QLabel(AddEmployee);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(400, 50));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        error = new QLabel(AddEmployee);
        error->setObjectName(QString::fromUtf8("error"));
        error->setMaximumSize(QSize(16777215, 20));
        error->setFont(font);
        error->setStyleSheet(QString::fromUtf8("QLabel { color: rgb(200, 0, 0); } "));
        error->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(error, 2, 0, 1, 1);


        retranslateUi(AddEmployee);
        QObject::connect(accept, SIGNAL(clicked()), AddEmployee, SLOT(accept()));
        QObject::connect(cancel, SIGNAL(clicked()), AddEmployee, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddEmployee);
    } // setupUi

    void retranslateUi(QDialog *AddEmployee)
    {
        AddEmployee->setWindowTitle(QCoreApplication::translate("AddEmployee", "Dialog", nullptr));
        accept->setText(QCoreApplication::translate("AddEmployee", "\320\236\320\272", nullptr));
        cancel->setText(QCoreApplication::translate("AddEmployee", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("AddEmployee", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("AddEmployee", "\320\230\320\274\321\217", nullptr));
        label_7->setText(QCoreApplication::translate("AddEmployee", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_8->setText(QCoreApplication::translate("AddEmployee", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        numberself->setText(QString());
        label_9->setText(QCoreApplication::translate("AddEmployee", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_10->setText(QCoreApplication::translate("AddEmployee", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_11->setText(QCoreApplication::translate("AddEmployee", "\320\237\321\200\320\276\321\204\320\265\321\201\321\201\320\270\321\217", nullptr));
        label_12->setText(QCoreApplication::translate("AddEmployee", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_13->setText(QCoreApplication::translate("AddEmployee", "\320\235\320\276\320\274\320\265\321\200 \320\277\320\276\320\264\321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217", nullptr));
        numberofdevision->setItemText(0, QString());

        label_14->setText(QCoreApplication::translate("AddEmployee", "\320\241\320\265\320\274\320\265\320\271\320\275\320\276\320\265 \320\237\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        SP->setItemText(0, QString());
        SP->setItemText(1, QCoreApplication::translate("AddEmployee", "\320\245\320\276\320\273\320\276\321\201\321\202/\320\235\320\265 \320\267\320\260\320\274\321\203\320\266\320\265\320\274", nullptr));
        SP->setItemText(2, QCoreApplication::translate("AddEmployee", "\320\226\320\265\320\275\320\260\321\202/\320\227\320\260\320\274\321\203\320\266\320\265\320\274", nullptr));

        label_15->setText(QCoreApplication::translate("AddEmployee", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\264\320\265\321\202\320\265\320\271", nullptr));
        label_2->setText(QCoreApplication::translate("AddEmployee", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_3->setText(QCoreApplication::translate("AddEmployee", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label_4->setText(QCoreApplication::translate("AddEmployee", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        status->setItemText(0, QString());
        status->setItemText(1, QCoreApplication::translate("AddEmployee", "\320\224\320\270\321\201\320\277\320\265\321\202\321\207\320\265\321\200", nullptr));
        status->setItemText(2, QCoreApplication::translate("AddEmployee", "\320\240\320\260\320\261\320\276\321\202\320\275\320\270\320\272", nullptr));

        label_16->setText(QCoreApplication::translate("AddEmployee", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\320\276\320\264\321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217:", nullptr));
        nameofdiv->setText(QString());
        label_18->setText(QCoreApplication::translate("AddEmployee", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214:", nullptr));
        director->setText(QString());
        label->setText(QCoreApplication::translate("AddEmployee", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260/\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260", nullptr));
        error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddEmployee: public Ui_AddEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEMPLOYEE_H
