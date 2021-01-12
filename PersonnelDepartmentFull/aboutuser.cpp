#include "aboutuser.h"
#include "ui_aboutuser.h"
#include "user.h"
#include "mainwidget.h"

aboutuser::aboutuser(const Users &user, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutuser)

{
     ui->setupUi(this);
     ui->login->setText(user.login());
     ui->status->setText(user.statusString());

     QString password = "";
     for (int i = 0; i < user.password().size(); i++)
    {
        password += '*';
    }
    ui->passw->setText(password);

}

aboutuser::~aboutuser()
{
    delete ui;
}
