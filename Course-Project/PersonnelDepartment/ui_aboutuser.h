/********************************************************************************
** Form generated from reading UI file 'aboutuser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUSER_H
#define UI_ABOUTUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_aboutuser
{
public:
    QGridLayout *gridLayout;
    QLabel *error;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *login;
    QLabel *passw;
    QLabel *status;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *accept;

    void setupUi(QDialog *aboutuser)
    {
        if (aboutuser->objectName().isEmpty())
            aboutuser->setObjectName(QString::fromUtf8("aboutuser"));
        aboutuser->resize(397, 300);
        gridLayout = new QGridLayout(aboutuser);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        error = new QLabel(aboutuser);
        error->setObjectName(QString::fromUtf8("error"));
        QFont font;
        font.setPointSize(12);
        error->setFont(font);
        error->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(error, 7, 2, 1, 2);

        label = new QLabel(aboutuser);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 53, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 77, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 9, 9, 9);
        label_4 = new QLabel(aboutuser);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_4->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(aboutuser);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_4->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(aboutuser);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        login = new QLabel(aboutuser);
        login->setObjectName(QString::fromUtf8("login"));
        login->setFont(font);

        gridLayout_4->addWidget(login, 0, 1, 1, 1);

        passw = new QLabel(aboutuser);
        passw->setObjectName(QString::fromUtf8("passw"));
        passw->setFont(font);

        gridLayout_4->addWidget(passw, 1, 1, 1, 1);

        status = new QLabel(aboutuser);
        status->setObjectName(QString::fromUtf8("status"));
        status->setFont(font);

        gridLayout_4->addWidget(status, 2, 1, 1, 1);


        gridLayout->addLayout(gridLayout_4, 5, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(3, -1, 9, 9);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        accept = new QPushButton(aboutuser);
        accept->setObjectName(QString::fromUtf8("accept"));
        QFont font2;
        font2.setPointSize(14);
        accept->setFont(font2);

        gridLayout_3->addWidget(accept, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_3, 7, 0, 1, 1);


        retranslateUi(aboutuser);
        QObject::connect(accept, SIGNAL(clicked()), aboutuser, SLOT(close()));

        QMetaObject::connectSlotsByName(aboutuser);
    } // setupUi

    void retranslateUi(QDialog *aboutuser)
    {
        aboutuser->setWindowTitle(QCoreApplication::translate("aboutuser", "Dialog", nullptr));
        error->setText(QString());
        label->setText(QCoreApplication::translate("aboutuser", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260 \320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("aboutuser", "\320\241\321\202\320\260\321\202\321\203\321\201:", nullptr));
        label_3->setText(QCoreApplication::translate("aboutuser", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label_2->setText(QCoreApplication::translate("aboutuser", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        login->setText(QString());
        passw->setText(QString());
        status->setText(QString());
        accept->setText(QCoreApplication::translate("aboutuser", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutuser: public Ui_aboutuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUSER_H
