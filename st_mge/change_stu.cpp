#include "change_stu.h"
#include "ui_change_stu.h"
#include <QDebug>
change_stu::change_stu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::change_stu)
{
    ui->setupUi(this);
}

change_stu::~change_stu()
{
    delete ui;
}

void change_stu::on_pushButton_clicked()
{
    id = ui->id->text();
    message<<ui->name->text() << ui->id->text();
    qDebug() <<ui->name->text();
    if(ui->boy->isChecked())
    {
        message<<"男";
    }
    else if(ui->gril->isChecked()){
        message<<"女";
    }
    else
        message<<"";
    message << ui->age->text() << ui->pro->text() << ui->class_2->text();
    emit change_over();
}
void change_stu::_clear(){
    ui->id->clear();
    ui->pro->clear();
    ui->age->clear();
    ui->name->clear();
    ui->class_2->clear();
}

void change_stu::on_cancel_clicked()
{
    _clear();
    this->hide();
}

QStringList change_stu::list(){
    return message;
}
QString change_stu::stu_id(){
    return id;
}
