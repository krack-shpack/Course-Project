/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *User;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *Div;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Manage;
    QHBoxLayout *horizontalLayout;
    QLabel *Mailabel;
    QLineEdit *Find;
    QTableWidget *TableEmpl;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(1300, 600);
        gridLayout = new QGridLayout(MainWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 9, -1, -1);
        User = new QPushButton(MainWidget);
        User->setObjectName(QString::fromUtf8("User"));
        QFont font;
        font.setPointSize(16);
        User->setFont(font);

        horizontalLayout_2->addWidget(User);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Div = new QPushButton(MainWidget);
        Div->setObjectName(QString::fromUtf8("Div"));
        Div->setFont(font);

        horizontalLayout_2->addWidget(Div);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        Manage = new QPushButton(MainWidget);
        Manage->setObjectName(QString::fromUtf8("Manage"));
        Manage->setFont(font);

        horizontalLayout_2->addWidget(Manage);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(130, 9, 9, 9);
        Mailabel = new QLabel(MainWidget);
        Mailabel->setObjectName(QString::fromUtf8("Mailabel"));
        Mailabel->setMinimumSize(QSize(0, 40));
        QFont font1;
        font1.setPointSize(18);
        Mailabel->setFont(font1);
        Mailabel->setTextFormat(Qt::AutoText);
        Mailabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Mailabel);

        Find = new QLineEdit(MainWidget);
        Find->setObjectName(QString::fromUtf8("Find"));
        Find->setMinimumSize(QSize(150, 0));
        Find->setMaximumSize(QSize(150, 16777215));
        Find->setSizeIncrement(QSize(150, 0));
        Find->setBaseSize(QSize(150, 0));
        QFont font2;
        font2.setPointSize(12);
        Find->setFont(font2);
        Find->setCursor(QCursor(Qt::IBeamCursor));

        horizontalLayout->addWidget(Find);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        TableEmpl = new QTableWidget(MainWidget);
        if (TableEmpl->columnCount() < 13)
            TableEmpl->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TableEmpl->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TableEmpl->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TableEmpl->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        TableEmpl->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        TableEmpl->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        TableEmpl->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        TableEmpl->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        TableEmpl->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        TableEmpl->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        TableEmpl->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        TableEmpl->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        TableEmpl->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        TableEmpl->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        TableEmpl->setObjectName(QString::fromUtf8("TableEmpl"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font3.setPointSize(10);
        TableEmpl->setFont(font3);
        TableEmpl->setEditTriggers(QAbstractItemView::NoEditTriggers);
        TableEmpl->setSelectionMode(QAbstractItemView::SingleSelection);
        TableEmpl->setSelectionBehavior(QAbstractItemView::SelectRows);
        TableEmpl->horizontalHeader()->setCascadingSectionResizes(false);
        TableEmpl->horizontalHeader()->setMinimumSectionSize(35);
        TableEmpl->horizontalHeader()->setDefaultSectionSize(150);
        TableEmpl->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        TableEmpl->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(TableEmpl, 2, 0, 1, 1);


        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
        User->setText(QCoreApplication::translate("MainWidget", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\272\320\260\320\261\320\270\320\275\320\265\321\202", nullptr));
        Div->setText(QCoreApplication::translate("MainWidget", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\276\321\202\320\264\320\265\320\273\320\260\320\274\320\270", nullptr));
        Manage->setText(QCoreApplication::translate("MainWidget", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\200\320\260\320\261\320\276\321\202\320\275\320\270\320\272\320\260\320\274\320\270", nullptr));
        Mailabel->setText(QCoreApplication::translate("MainWidget", "\320\236\321\202\320\264\320\265\320\273 \320\272\320\260\320\264\321\200\320\276\320\262", nullptr));
        Find->setText(QString());
        Find->setPlaceholderText(QCoreApplication::translate("MainWidget", "\320\237\320\276\320\270\321\201\320\272...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = TableEmpl->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWidget", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TableEmpl->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWidget", "\320\230\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = TableEmpl->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWidget", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = TableEmpl->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWidget", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = TableEmpl->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWidget", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = TableEmpl->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWidget", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = TableEmpl->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWidget", "\320\237\321\200\320\276\321\204\320\265\321\201\321\201\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = TableEmpl->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWidget", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = TableEmpl->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWidget", "\342\204\226 \320\277\320\276\320\264\321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = TableEmpl->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWidget", "\320\241\320\265\320\274\320\265\320\271\320\275\320\276\320\265 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = TableEmpl->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWidget", "\320\232\320\276\320\273-\320\262\320\276 \320\264\320\265\321\202\320\265\320\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = TableEmpl->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWidget", "\320\237\320\276\320\264\321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = TableEmpl->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWidget", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
