/********************************************************************************
** Form generated from reading UI file 'addDiv.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIV_H
#define UI_ADDDIV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddDivision
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QPushButton *cancel;
    QPushButton *accept;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLineEdit *number;
    QLabel *label_6;
    QLineEdit *director;
    QLabel *label_2;
    QLineEdit *nameq;
    QLabel *label;
    QLabel *error;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AddDivision)
    {
        if (AddDivision->objectName().isEmpty())
            AddDivision->setObjectName(QString::fromUtf8("AddDivision"));
        AddDivision->resize(330, 294);
        gridLayout = new QGridLayout(AddDivision);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cancel = new QPushButton(AddDivision);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        QFont font;
        font.setPointSize(12);
        cancel->setFont(font);

        gridLayout_2->addWidget(cancel, 0, 0, 1, 1);

        accept = new QPushButton(AddDivision);
        accept->setObjectName(QString::fromUtf8("accept"));
        accept->setFont(font);

        gridLayout_2->addWidget(accept, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 4, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_5 = new QLabel(AddDivision);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        number = new QLineEdit(AddDivision);
        number->setObjectName(QString::fromUtf8("number"));
        number->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, number);

        label_6 = new QLabel(AddDivision);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        director = new QLineEdit(AddDivision);
        director->setObjectName(QString::fromUtf8("director"));
        director->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, director);

        label_2 = new QLabel(AddDivision);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        nameq = new QLineEdit(AddDivision);
        nameq->setObjectName(QString::fromUtf8("nameq"));
        nameq->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, nameq);


        gridLayout->addLayout(formLayout, 2, 0, 1, 1);

        label = new QLabel(AddDivision);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(400, 50));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        error = new QLabel(AddDivision);
        error->setObjectName(QString::fromUtf8("error"));
        error->setMaximumSize(QSize(16777215, 20));
        error->setFont(font);
        error->setStyleSheet(QString::fromUtf8("QLabel { color: rgb(200, 0, 0); } "));
        error->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(error, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);


        retranslateUi(AddDivision);
        QObject::connect(cancel, SIGNAL(clicked()), AddDivision, SLOT(reject()));
        QObject::connect(accept, SIGNAL(clicked()), AddDivision, SLOT(accept()));

        QMetaObject::connectSlotsByName(AddDivision);
    } // setupUi

    void retranslateUi(QDialog *AddDivision)
    {
        AddDivision->setWindowTitle(QCoreApplication::translate("AddDivision", "Dialog", nullptr));
        cancel->setText(QCoreApplication::translate("AddDivision", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        accept->setText(QCoreApplication::translate("AddDivision", "\320\236\320\272", nullptr));
        label_5->setText(QCoreApplication::translate("AddDivision", "\320\235\320\276\320\274\320\265\321\200 \320\276\321\202\320\264\320\265\320\273\320\260:", nullptr));
        label_6->setText(QCoreApplication::translate("AddDivision", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214:", nullptr));
        label_2->setText(QCoreApplication::translate("AddDivision", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\276\321\202\320\264\320\265\320\273\320\260:", nullptr));
        label->setText(QCoreApplication::translate("AddDivision", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\276\321\202\320\264\320\265\320\273\320\260", nullptr));
        error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddDivision: public Ui_AddDivision {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIV_H
