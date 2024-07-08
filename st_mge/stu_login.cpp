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

    if (password.length()<6){
        QMessageBox::about(this,"错误","密码少于6位");
    }
    else{
        if (name=="admin"&&password=="123456")
        {
            qDebug()<<"登陆成功";
            emit sendLoginSuccess();
            this->hide();
        }
        else
        {
            QMessageBox::about(this,"错误","用户名或密码错误");
        }

    }


}


void stu_login::on_btexit_clicked()
{
    exit(0);
}

