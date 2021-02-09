/********************************************************************************
** Form generated from reading UI file 'Manage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGE_H
#define UI_MANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Manage
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *accept;
    QPushButton *deleteuser;
    QPushButton *adduser;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *edituser;
    QTableWidget *Table;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *Find;

    void setupUi(QDialog *Manage)
    {
        if (Manage->objectName().isEmpty())
            Manage->setObjectName(QString::fromUtf8("Manage"));
        Manage->resize(1150, 600);
        gridLayout = new QGridLayout(Manage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(9);
        gridLayout_2->setContentsMargins(-1, -1, 9, 9);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        accept = new QPushButton(Manage);
        accept->setObjectName(QString::fromUtf8("accept"));
        QFont font;
        font.setPointSize(16);
        accept->setFont(font);

        gridLayout_2->addWidget(accept, 1, 5, 1, 1);

        deleteuser = new QPushButton(Manage);
        deleteuser->setObjectName(QString::fromUtf8("deleteuser"));
        deleteuser->setFont(font);

        gridLayout_2->addWidget(deleteuser, 1, 2, 1, 1);

        adduser = new QPushButton(Manage);
        adduser->setObjectName(QString::fromUtf8("adduser"));
        adduser->setFont(font);

        gridLayout_2->addWidget(adduser, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 4, 1, 1);

        edituser = new QPushButton(Manage);
        edituser->setObjectName(QString::fromUtf8("edituser"));
        edituser->setFont(font);

        gridLayout_2->addWidget(edituser, 1, 3, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 0, 1, 1);

        Table = new QTableWidget(Manage);
        if (Table->columnCount() < 13)
            Table->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Table->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        Table->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        Table->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        Table->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        Table->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        Table->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        Table->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        Table->setObjectName(QString::fromUtf8("Table"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(10);
        Table->setFont(font1);
        Table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Table->setSelectionMode(QAbstractItemView::SingleSelection);
        Table->setSelectionBehavior(QAbstractItemView::SelectRows);
        Table->horizontalHeader()->setCascadingSectionResizes(false);
        Table->horizontalHeader()->setMinimumSectionSize(35);
        Table->horizontalHeader()->setDefaultSectionSize(150);
        Table->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        Table->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(Table, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(120, 9, 9, 9);
        label = new QLabel(Manage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        Find = new QLineEdit(Manage);
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


        retranslateUi(Manage);
        QObject::connect(accept, SIGNAL(clicked()), Manage, SLOT(accept()));

        QMetaObject::connectSlotsByName(Manage);
    } // setupUi

    void retranslateUi(QDialog *Manage)
    {
        Manage->setWindowTitle(QCoreApplication::translate("Manage", "Dialog", nullptr));
        accept->setText(QCoreApplication::translate("Manage", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        deleteuser->setText(QCoreApplication::translate("Manage", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 ", nullptr));
        adduser->setText(QCoreApplication::translate("Manage", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 ", nullptr));
        edituser->setText(QCoreApplication::translate("Manage", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Manage", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Manage", "\320\230\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Manage", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Manage", "\320\233\320\270\321\207\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = Table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Manage", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = Table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Manage", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = Table->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Manage", "\320\237\321\200\320\276\321\204\320\265\321\201\321\201\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = Table->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Manage", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = Table->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Manage", "\342\204\226 \320\277\320\276\320\264\321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = Table->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Manage", "\320\241\320\265\320\274\320\265\320\271\320\275\320\276\320\265 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = Table->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Manage", "\320\232\320\276\320\273-\320\262\320\276 \320\264\320\265\321\202\320\265\320\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = Table->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Manage", "\320\237\320\276\320\264\321\200\320\260\320\267\320\264\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = Table->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Manage", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        label->setText(QCoreApplication::translate("Manage", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        Find->setText(QString());
        Find->setPlaceholderText(QCoreApplication::translate("Manage", "\320\237\320\276\320\270\321\201\320\272...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manage: public Ui_Manage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGE_H
