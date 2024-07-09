#include "add.h"
#include "ui_add.h"
#include "student.h"
#include <QString>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QSettings>
#include <QMessageBox>
add::add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add)
{
    ui->setupUi(this);
}

add::~add()
{
    delete ui;
}

void add::on_pushButton_clicked()
{
    QString number;
    QString name;
    QString sex;
    QString age;
    QString pro;
    QString class_2;

    name =ui->name->text();
    number =ui->number->text();
    age =ui->age->text();
    sex = ui->boy->isChecked()? "男":"女";
    pro =ui->pro->text();
    class_2= ui->class_2->text();

    student st(name,number,sex,age,pro,class_2);

    if(st.check()){
        addDATA(st);
        this->hide();
        emit add_over();
    }
    else{
        QMessageBox::about(this,"错误","输入格式错误");
    }

}

void add::addDATA(student& st)
{
    QFile file ("student.txt");

    if (!file.open(QIODevice::Append|QIODevice::Text))   //文件打开不成功
    {
        qDebug()<<"file open failure!";
        return ;
    }

    QTextStream out(&file);
    // qDebug()<<"file open success!";
    out<<st;

    file.close();
}

void add::on_pushButton_2_clicked()
{
    emit add_hundred();
}

