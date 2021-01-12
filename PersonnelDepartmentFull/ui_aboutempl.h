/********************************************************************************
** Form generated from reading UI file 'aboutempl.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTEMPL_H
#define UI_ABOUTEMPL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_aboutempl
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *accept;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *profession;
    QLabel *surname;
    QLabel *SP;
    QLabel *post;
    QLabel *numberofdivision;
    QLabel *label_2;
    QLabel *education;
    QLabel *label_8;
    QLabel *label_14;
    QLabel *label_3;
    QLabel *rykovoditel;
    QLabel *label_13;
    QLabel *numberself;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *nameofdivision;
    QLabel *name2;
    QLabel *name;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *date;
    QLabel *label_15;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *numberofkids;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *aboutempl)
    {
        if (aboutempl->objectName().isEmpty())
            aboutempl->setObjectName(QString::fromUtf8("aboutempl"));
        aboutempl->resize(400, 421);
        gridLayout = new QGridLayout(aboutempl);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(aboutempl);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        accept = new QPushButton(aboutempl);
        accept->setObjectName(QString::fromUtf8("accept"));
        QFont font1;
        font1.setPointSize(14);
        accept->setFont(font1);

        horizontalLayout->addWidget(accept);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(aboutempl);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font2;
        font2.setPointSize(12);
        label_4->setFont(font2);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        profession = new QLabel(aboutempl);
        profession->setObjectName(QString::fromUtf8("profession"));
        profession->setFont(font2);

        gridLayout_2->addWidget(profession, 7, 1, 1, 1);

        surname = new QLabel(aboutempl);
        surname->setObjectName(QString::fromUtf8("surname"));
        surname->setFont(font2);

        gridLayout_2->addWidget(surname, 3, 1, 1, 1);

        SP = new QLabel(aboutempl);
        SP->setObjectName(QString::fromUtf8("SP"));
        SP->setFont(font2);

        gridLayout_2->addWidget(SP, 9, 1, 1, 1);

        post = new QLabel(aboutempl);
        post->setObjectName(QString::fromUtf8("post"));
        post->setFont(font2);

        gridLayout_2->addWidget(post, 8, 1, 1, 1);

        numberofdivision = new QLabel(aboutempl);
        numberofdivision->setObjectName(QString::fromUtf8("numberofdivision"));
        numberofdivision->setFont(font2);

        gridLayout_2->addWidget(numberofdivision, 11, 1, 1, 1);

        label_2 = new QLabel(aboutempl);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        education = new QLabel(aboutempl);
        education->setObjectName(QString::fromUtf8("education"));
        education->setFont(font2);

        gridLayout_2->addWidget(education, 6, 1, 1, 1);

        label_8 = new QLabel(aboutempl);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);

        gridLayout_2->addWidget(label_8, 14, 0, 1, 1);

        label_14 = new QLabel(aboutempl);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font2);

        gridLayout_2->addWidget(label_14, 4, 0, 1, 1);

        label_3 = new QLabel(aboutempl);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        rykovoditel = new QLabel(aboutempl);
        rykovoditel->setObjectName(QString::fromUtf8("rykovoditel"));
        rykovoditel->setFont(font2);

        gridLayout_2->addWidget(rykovoditel, 15, 1, 1, 1);

        label_13 = new QLabel(aboutempl);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font2);

        gridLayout_2->addWidget(label_13, 6, 0, 1, 1);

        numberself = new QLabel(aboutempl);
        numberself->setObjectName(QString::fromUtf8("numberself"));
        numberself->setFont(font2);

        gridLayout_2->addWidget(numberself, 4, 1, 1, 1);

        label_9 = new QLabel(aboutempl);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);

        gridLayout_2->addWidget(label_9, 15, 0, 1, 1);

        label_5 = new QLabel(aboutempl);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        gridLayout_2->addWidget(label_5, 7, 0, 1, 1);

        nameofdivision = new QLabel(aboutempl);
        nameofdivision->setObjectName(QString::fromUtf8("nameofdivision"));
        nameofdivision->setFont(font2);

        gridLayout_2->addWidget(nameofdivision, 14, 1, 1, 1);

        name2 = new QLabel(aboutempl);
        name2->setObjectName(QString::fromUtf8("name2"));
        name2->setFont(font2);

        gridLayout_2->addWidget(name2, 2, 1, 1, 1);

        name = new QLabel(aboutempl);
        name->setObjectName(QString::fromUtf8("name"));
        name->setFont(font2);

        gridLayout_2->addWidget(name, 0, 1, 1, 1);

        label_7 = new QLabel(aboutempl);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        gridLayout_2->addWidget(label_7, 9, 0, 1, 1);

        label_6 = new QLabel(aboutempl);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        gridLayout_2->addWidget(label_6, 11, 0, 1, 1);

        date = new QLabel(aboutempl);
        date->setObjectName(QString::fromUtf8("date"));
        date->setFont(font2);

        gridLayout_2->addWidget(date, 5, 1, 1, 1);

        label_15 = new QLabel(aboutempl);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font2);

        gridLayout_2->addWidget(label_15, 5, 0, 1, 1);

        label_12 = new QLabel(aboutempl);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font2);

        gridLayout_2->addWidget(label_12, 8, 0, 1, 1);

        label_11 = new QLabel(aboutempl);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font2);

        gridLayout_2->addWidget(label_11, 10, 0, 1, 1);

        numberofkids = new QLabel(aboutempl);
        numberofkids->setObjectName(QString::fromUtf8("numberofkids"));
        numberofkids->setFont(font2);

        gridLayout_2->addWidget(numberofkids, 10, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);


        retranslateUi(aboutempl);
        QObject::connect(accept, SIGNAL(clicked()), aboutempl, SLOT(close()));

        QMetaObject::connectSlotsByName(aboutempl);
    } // setupUi

    void retranslateUi(QDialog *aboutempl)
    {
        aboutempl->setWindowTitle(QCoreApplication::translate("aboutempl", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("aboutempl", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260 \320\276 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\265", nullptr));
        accept->setText(QCoreApplication::translate("aboutempl", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("aboutempl", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        profession->setText(QString());
        surname->setText(QString());
        SP->setText(QString());
        post->setText(QString());
        numberofdivision->setText(QString());
        label_2->setText(QCoreApplication::translate("aboutempl", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        education->setText(QString());
        label_8->setText(QCoreApplication::translate("aboutempl", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\320\276\320\264\321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_14->setText(QCoreApplication::translate("aboutempl", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("aboutempl", "\320\230\320\274\321\217", nullptr));
        rykovoditel->setText(QString());
        label_13->setText(QCoreApplication::translate("aboutempl", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        numberself->setText(QString());
        label_9->setText(QCoreApplication::translate("aboutempl", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("aboutempl", "\320\237\321\200\320\276\321\204\320\265\321\201\321\201\320\270\321\217", nullptr));
        nameofdivision->setText(QString());
        name2->setText(QString());
        name->setText(QString());
        label_7->setText(QCoreApplication::translate("aboutempl", "\320\241\320\265\320\274\320\265\320\271\320\275\320\276\320\265 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("aboutempl", "\320\235\320\276\320\274\320\265\321\200 \320\277\320\276\320\264\321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217", nullptr));
        date->setText(QString());
        label_15->setText(QCoreApplication::translate("aboutempl", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_12->setText(QCoreApplication::translate("aboutempl", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_11->setText(QCoreApplication::translate("aboutempl", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\264\320\265\321\202\320\265\320\271", nullptr));
        numberofkids->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class aboutempl: public Ui_aboutempl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTEMPL_H
