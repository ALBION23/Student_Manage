#include "stu_login.h"
#include "ui_stu_login.h"
#include <QMessageBox>
stu_login::stu_login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::stu_login)
{
    ui->setupUi(this);
}

stu_login::~stu_login()
{
    delete ui;
}

void stu_login::on_btlogin_clicked()
{

    QString name =ui->username->text();
    QString password =ui->passwd->text();

    emit sendLoginSuccess(name,password);

}


void stu_login::on_btexit_clicked()
{
    exit(0);
}

