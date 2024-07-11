#include "change_stu.h"
#include "ui_change_stu.h"
#include <QDebug>
#include <QMessageBox>
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

void change_stu::hideChangeLevel(int usrLevel){
    if(usrLevel <= 1){
        ui->label_8->setVisible(false);
        ui->comboBox->setVisible(false);
    }
    else{
        ui->label_8->setVisible(true);
        ui->comboBox->setVisible(true);
    }
}

void change_stu::on_pushButton_clicked()
{
    QString id;
    QStringList message;
    id = ui->id->text();

    if(id.isEmpty()){
        QMessageBox::about(this,"错误","输入格式错误");
        return ;
    }

    message<<ui->name->text() << ui->id->text();
    // qDebug() <<ui->name->text();

    if(ui->boy->isChecked())
    {
        message<<"男";
    }
    else if(ui->gril->isChecked()){
        message<<"女";
    }
    else
        message<<"";
    QString age = ui->age->text();
    if(!age.isEmpty()){
        for(QChar i : age){
            if(!i.isDigit()){
                QMessageBox::about(this,"错误","输入格式错误");
                return ;
            }
        }
    }
    message << ui->age->text() << ui->pro->text() << ui->class_2->text()<<ui->comboBox->currentText();
    qDebug() << ui->comboBox->currentText();
    emit change_over(id,message);
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

