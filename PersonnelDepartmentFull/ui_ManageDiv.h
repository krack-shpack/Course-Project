/********************************************************************************
** Form generated from reading UI file 'ManageDiv.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEDIV_H
#define UI_MANAGEDIV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageDiv
{
public:
    QGridLayout *gridLayout;
    QTableWidget *TableOfDiv;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *adddiv;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *deletediv;
    QHBoxLayout *horizontalLayout;
    QPushButton *accept;
    QLabel *label;

    void setupUi(QDialog *ManageDiv)
    {
        if (ManageDiv->objectName().isEmpty())
            ManageDiv->setObjectName(QString::fromUtf8("ManageDiv"));
        ManageDiv->resize(502, 538);
        gridLayout = new QGridLayout(ManageDiv);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TableOfDiv = new QTableWidget(ManageDiv);
        if (TableOfDiv->columnCount() < 3)
            TableOfDiv->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TableOfDiv->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TableOfDiv->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TableOfDiv->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        TableOfDiv->setObjectName(QString::fromUtf8("TableOfDiv"));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(10);
        TableOfDiv->setFont(font);
        TableOfDiv->setEditTriggers(QAbstractItemView::NoEditTriggers);
        TableOfDiv->setSelectionMode(QAbstractItemView::SingleSelection);
        TableOfDiv->setSelectionBehavior(QAbstractItemView::SelectRows);
        TableOfDiv->horizontalHeader()->setCascadingSectionResizes(false);
        TableOfDiv->horizontalHeader()->setMinimumSectionSize(35);
        TableOfDiv->horizontalHeader()->setDefaultSectionSize(150);
        TableOfDiv->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        TableOfDiv->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(TableOfDiv, 1, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(9);
        gridLayout_2->setContentsMargins(-1, -1, 9, 9);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        adddiv = new QPushButton(ManageDiv);
        adddiv->setObjectName(QString::fromUtf8("adddiv"));
        QFont font1;
        font1.setPointSize(16);
        adddiv->setFont(font1);

        gridLayout_2->addWidget(adddiv, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        deletediv = new QPushButton(ManageDiv);
        deletediv->setObjectName(QString::fromUtf8("deletediv"));
        deletediv->setFont(font1);

        gridLayout_2->addWidget(deletediv, 1, 2, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 9, 9, 9);
        accept = new QPushButton(ManageDiv);
        accept->setObjectName(QString::fromUtf8("accept"));
        accept->setFont(font1);

        horizontalLayout->addWidget(accept);


        gridLayout->addLayout(horizontalLayout, 4, 2, 1, 1);

        label = new QLabel(ManageDiv);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 2, 1, 1);


        retranslateUi(ManageDiv);
        QObject::connect(accept, SIGNAL(clicked()), ManageDiv, SLOT(accept()));

        QMetaObject::connectSlotsByName(ManageDiv);
    } // setupUi

    void retranslateUi(QDialog *ManageDiv)
    {
        ManageDiv->setWindowTitle(QCoreApplication::translate("ManageDiv", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = TableOfDiv->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ManageDiv", "\320\235\320\276\320\274\320\265\321\200 \320\276\321\202\320\264\320\265\320\273\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TableOfDiv->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ManageDiv", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\276\321\202\320\264\320\265\320\273\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = TableOfDiv->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ManageDiv", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        adddiv->setText(QCoreApplication::translate("ManageDiv", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 ", nullptr));
        deletediv->setText(QCoreApplication::translate("ManageDiv", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 ", nullptr));
        accept->setText(QCoreApplication::translate("ManageDiv", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("ManageDiv", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\276\321\202\320\264\320\265\320\273\320\260\320\274\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageDiv: public Ui_ManageDiv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEDIV_H
