/********************************************************************************
** Form generated from reading UI file 'widget_SignUp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SIGNUP_H
#define UI_WIDGET_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Registr;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *label_error;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *login;
    QLabel *label_3;
    QLineEdit *passw;
    QLabel *label_4;
    QLineEdit *repeat;

    void setupUi(QWidget *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(400, 300);
        SignUp->setMinimumSize(QSize(400, 300));
        SignUp->setMaximumSize(QSize(400, 600));
        gridLayout = new QGridLayout(SignUp);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Registr = new QPushButton(SignUp);
        Registr->setObjectName(QString::fromUtf8("Registr"));
        Registr->setMinimumSize(QSize(200, 0));
        Registr->setMaximumSize(QSize(300, 31));
        QFont font;
        font.setPointSize(14);
        Registr->setFont(font);

        horizontalLayout->addWidget(Registr);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);

        label = new QLabel(SignUp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(400, 50));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_error = new QLabel(SignUp);
        label_error->setObjectName(QString::fromUtf8("label_error"));
        QFont font2;
        font2.setPointSize(12);
        label_error->setFont(font2);
        label_error->setStyleSheet(QString::fromUtf8("QLabel { color: rgb(200, 0, 0); } "));
        label_error->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_error, 5, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(SignUp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        login = new QLineEdit(SignUp);
        login->setObjectName(QString::fromUtf8("login"));
        login->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, login);

        label_3 = new QLabel(SignUp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        passw = new QLineEdit(SignUp);
        passw->setObjectName(QString::fromUtf8("passw"));
        passw->setFont(font2);
        passw->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passw);

        label_4 = new QLabel(SignUp);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        repeat = new QLineEdit(SignUp);
        repeat->setObjectName(QString::fromUtf8("repeat"));
        repeat->setFont(font2);
        repeat->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, repeat);


        gridLayout->addLayout(formLayout, 3, 0, 1, 1);


        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QWidget *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Form", nullptr));
        Registr->setText(QCoreApplication::translate("SignUp", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
        label_error->setText(QString());
        label_2->setText(QCoreApplication::translate("SignUp", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label_4->setText(QCoreApplication::translate("SignUp", "\320\237\320\276\320\262\321\202\320\276\321\200\320\265\320\275\320\270\320\265 \320\277\320\260\321\200\320\276\320\273\321\217:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SIGNUP_H
