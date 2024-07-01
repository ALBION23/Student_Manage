#include "stu_login.h"
#include "ui_stu_login.h"

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
    //数据库查找

    emit sendLoginSuccess();
    this->hide();
}


void stu_login::on_btexit_clicked()
{
    exit(0);
}

