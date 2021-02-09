#include "ui_account.h"
#include "account.h"
#include "user.h"
#include "mainwidget.h"
#include <aboutempl.h>
#include <aboutuser.h>

Account::Account(Users &user, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Account),
    m_user(user)
{
    ui->setupUi(this);
    if (user.status()==Users::Admin)
        ui->aboutempl->hide();
}

Account::~Account()
{
    delete ui;
}

void Account::on_aboutuser_clicked()
{
    aboutuser dialog(m_user, this);
    dialog.setWindowTitle(windowTitle());

    dialog.exec();
}

void Account::on_aboutempl_clicked()
{
    aboutempl dialog(m_user, this);
    dialog.setWindowTitle(windowTitle());

    dialog.exec();
}
