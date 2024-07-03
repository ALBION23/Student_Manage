#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add.h"
#include "student.h"
#include <map>
#include <QString>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QSettings>
#include <QMessageBox>
#include <QStandardItemModel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_dlgLogin.show();
    auto f = [&](){
        this->show();
    };
    auto m = [&](){
        this->on_flash_clicked();
    };
    connect(&m_dlgLogin,&stu_login::sendLoginSuccess,this,f);
    connect(&add_st,&add::add_over,this,m);

    this->modle =new QStandardItemModel;
    modle->setHorizontalHeaderItem(0,new QStandardItem("姓名"));
    modle->setHorizontalHeaderItem(1,new QStandardItem("学号"));
    modle->setHorizontalHeaderItem(2,new QStandardItem("性别"));
    modle->setHorizontalHeaderItem(3,new QStandardItem("年龄"));        //模板设置
    modle->setHorizontalHeaderItem(4,new QStandardItem("专业"));
    modle->setHorizontalHeaderItem(5,new QStandardItem("班级"));
    ui->tableView->setModel(modle);  //引用模板
    this->on_flash_clicked();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_smExit_clicked()
{
  //  emit user_exit();
    m_dlgLogin.show();
    this->hide();
}


void MainWindow::on_addStudent_clicked()
{
    add_st.show();
}


void MainWindow::on_deleteStudent_clicked()
{

}


void MainWindow::on_flash_clicked()
{
    hash.clear();
    ls.clear();
    QFile file ("a.txt");
    if (!file.open(QIODevice::ReadOnly|QIODevice::Text))   //文件打开不成功
    {
        qDebug()<<"file open failure!\n";
        return ;
    }
    QTextStream in(&file);
    qDebug()<<"file open success!\n";
    int pos = 0;
    while (!in.atEnd())
    {
        student step(NULL,NULL,NULL,NULL,NULL,NULL);
        in >> step;
        QString temp = step.list()[1];
        if(!hash[temp]){
            ls.append(step);
            hash[temp] = ++pos;
        }
    }
    file.close();
    modle->clear();
    for(int i = 1;i<=pos;i++){
        for(int j = 0;j<6;j++)
            modle->setItem(i-1,j,new QStandardItem(ls[i-1].list().at(j)));
    }
}
/*void MainWindow::enquire_1(int row, QStringList sub)
{

    int i=0;
    for (i=0;i<sub.length();i++)
    {
        modle->setItem(row,i,new QStandardItem(sub.at(i)));
    }
}
*/
