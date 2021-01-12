/********************************************************************************
** Form generated from reading UI file 'widget_Sign.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SIGN_H
#define UI_WIDGET_SIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *error;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *info;
    QPushButton *in;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *passw;
    QLabel *label_3;
    QLineEdit *login;

    void setupUi(QWidget *Sign)
    {
        if (Sign->objectName().isEmpty())
            Sign->setObjectName(QString::fromUtf8("Sign"));
        Sign->resize(400, 300);
        Sign->setMinimumSize(QSize(400, 300));
        Sign->setMaximumSize(QSize(400, 300));
        gridLayout = new QGridLayout(Sign);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Sign);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        error = new QLabel(Sign);
        error->setObjectName(QString::fromUtf8("error"));
        QFont font1;
        font1.setPointSize(12);
        error->setFont(font1);
        error->setStyleSheet(QString::fromUtf8("QLabel { color: rgb(200, 0, 0); } "));
        error->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(error, 3, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, -1, 9, 9);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);

        info = new QPushButton(Sign);
        info->setObjectName(QString::fromUtf8("info"));
        info->setFont(font1);

        gridLayout_3->addWidget(info, 2, 1, 1, 1);

        in = new QPushButton(Sign);
        in->setObjectName(QString::fromUtf8("in"));
        in->setFont(font);

        gridLayout_3->addWidget(in, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_3, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 9, 9, 9);
        label_2 = new QLabel(Sign);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        passw = new QLineEdit(Sign);
        passw->setObjectName(QString::fromUtf8("passw"));
        passw->setFont(font1);
        passw->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(passw, 2, 1, 1, 1);

        label_3 = new QLabel(Sign);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        login = new QLineEdit(Sign);
        login->setObjectName(QString::fromUtf8("login"));
        login->setFont(font1);

        gridLayout_2->addWidget(login, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);


        retranslateUi(Sign);

        QMetaObject::connectSlotsByName(Sign);
    } // setupUi

    void retranslateUi(QWidget *Sign)
    {
        Sign->setWindowTitle(QCoreApplication::translate("Sign", "Form", nullptr));
        label->setText(QCoreApplication::translate("Sign", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        error->setText(QString());
        info->setText(QCoreApplication::translate("Sign", "\320\235\320\265\321\202 \320\273\320\270\321\207\320\275\320\276\320\263\320\276 \320\272\320\260\320\261\320\270\320\275\320\265\321\202\320\260?", nullptr));
        in->setText(QCoreApplication::translate("Sign", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("Sign", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_3->setText(QCoreApplication::translate("Sign", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign: public Ui_Sign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SIGN_H
