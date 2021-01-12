/********************************************************************************
** Form generated from reading UI file 'account.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_H
#define UI_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Account
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *accept;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_2;
    QPushButton *aboutempl;
    QPushButton *aboutuser;
    QPushButton *exit;

    void setupUi(QDialog *Account)
    {
        if (Account->objectName().isEmpty())
            Account->setObjectName(QString::fromUtf8("Account"));
        Account->resize(400, 300);
        gridLayout = new QGridLayout(Account);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        label = new QLabel(Account);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 9, 9, 9);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        accept = new QPushButton(Account);
        accept->setObjectName(QString::fromUtf8("accept"));
        QFont font1;
        font1.setPointSize(14);
        accept->setFont(font1);

        horizontalLayout_2->addWidget(accept);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_2, 7, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 9, 9, 9);
        aboutempl = new QPushButton(Account);
        aboutempl->setObjectName(QString::fromUtf8("aboutempl"));
        QFont font2;
        font2.setPointSize(12);
        aboutempl->setFont(font2);

        gridLayout_2->addWidget(aboutempl, 1, 0, 1, 1);

        aboutuser = new QPushButton(Account);
        aboutuser->setObjectName(QString::fromUtf8("aboutuser"));
        aboutuser->setFont(font2);

        gridLayout_2->addWidget(aboutuser, 0, 0, 1, 1);

        exit = new QPushButton(Account);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setFont(font2);

        gridLayout_2->addWidget(exit, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 4, 0, 1, 1);


        retranslateUi(Account);
        QObject::connect(accept, SIGNAL(clicked()), Account, SLOT(close()));
        QObject::connect(exit, SIGNAL(clicked()), Account, SLOT(accept()));

        QMetaObject::connectSlotsByName(Account);
    } // setupUi

    void retranslateUi(QDialog *Account)
    {
        Account->setWindowTitle(QCoreApplication::translate("Account", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Account", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        accept->setText(QCoreApplication::translate("Account", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        aboutempl->setText(QCoreApplication::translate("Account", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260 \320\276 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\265", nullptr));
        aboutuser->setText(QCoreApplication::translate("Account", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260 \320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265", nullptr));
        exit->setText(QCoreApplication::translate("Account", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Account: public Ui_Account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_H
