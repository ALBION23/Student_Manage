#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add.h"
#include "student.h"
#include "change_stu.h"
#include <QString>
#include <QStringList>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QSettings>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QRandomGenerator>
#include <QTableView>

QStringList View_Head_Labels ;

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
        ls_flash();
        on_flash_clicked();
        stack_stu.push({ls.back(),{1,ls.size()-1}});
    };
    auto g = [&]{
        int i = 0 ;
        while(i<100)
        {
            QString number;
            for (int j = 0; j < 10; ++j) {
                // 生成每位数字
                int digit = QRandomGenerator::global()->bounded(10); // 生成0到9之间的随机数
                number.append(QString::number(digit));
            }
            if(hash[number])
                continue;
            else{
                hash[number] = ls.size()+1;
                ls.append(student(number,QString::number(i)));
                i++;
            }
        }
        stack_stu.push({student(),{3,0}});
        Save_Data();
        on_flash_clicked();
    };
    connect(&m_dlgLogin,&stu_login::sendLoginSuccess,this,f);
    connect(&add_st,&add::add_over,this,m);
    connect(&add_st,&add::add_hundred,this,g);

    modle =new QStandardItemModel;
    ui->tableView->setModel(modle);


    View_Head_Labels << "姓名"<<"学号"<<"性别"<<"年龄"<<"专业"<<"班级";
    //不可修改
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //列宽自动拉伸
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    // ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    //垂直表头居中
    ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
    //锁定行高为40像素
    ui->tableView->verticalHeader()->setDefaultSectionSize(40);
    //显示滚动条
    ui->tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    //点击表头排序
    ui->tableView->setSortingEnabled(true);
    //选择整行
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    ls_flash();
    on_flash_clicked();

}

MainWindow::~MainWindow()
{
    delete ui;
    delete modle;
}

void MainWindow::on_smExit_clicked()
{
    m_dlgLogin.show();
    this->hide();
}


void MainWindow::on_addStudent_clicked()
{
    add_st.show();
}

void MainWindow::on_search_clicked()
{

    QString  str = ui->searchEdit->text();
    if(str.isEmpty()){
        QMessageBox::about(this,"错误","请在搜索框内输入内容");
    }
    else{
        modle->clear();
        modle -> setHorizontalHeaderLabels(View_Head_Labels);
        int pos = 0;
        for(int i = 0;i<ls.size();i++){
            if(ls[i].list()[0].indexOf(str)!=-1 ||ls[i].list()[1].indexOf(str)!=-1 )
            {
                for(int j = 0;j<6;j++)
                    modle->setItem(pos,j,new QStandardItem(ls[i].list().at(j)));
                pos++;
            }
        }

        if(!pos){
            QMessageBox::about(this,"错误","搜索结果为空");
        }
        ui->searchEdit->clear();
    }

}

void MainWindow::on_deleteStudent_clicked()
{
    // 获取选中的模型索引
    QItemSelectionModel *selectionModel = ui->tableView->selectionModel();
    QModelIndexList selectedRows = selectionModel->selectedRows();

    if (selectedRows.isEmpty()) {
        QMessageBox::about(this,"错误","请选中相应行");
        return;
    }

    // 删除选中的行
    for (int i = selectedRows.count() - 1; i >= 0; --i) {
        int row = selectedRows.at(i).row();
        QModelIndex index = modle->index(row,1);
        QVariant data = modle->data(index);
        QString rowData = data.toString();
        int pos = hash[rowData]-1;
        // qDebug() << pos;
        stack_stu.push({ls[pos],{2,pos}});
        ls.takeAt(pos);
        hash[rowData] = 0;
        modle->removeRow(row);

        Save_Data();
        ls_flash();
    }
}


void MainWindow::on_changemessage_clicked()
{
    cg_st.show();
    auto f = [&](){
        QString id = cg_st.stu_id();
        QStringList step = cg_st.list();
        if(hash[id]){
            int pos = hash[id] -1 ;
            QString name;
            QString sex;
            QString age;
            QString pro;
            QString class_2;
            name = step.at(0) == ""?ls[pos].list().at(0):step.at(0);
            sex = step.at(2) == ""?ls[pos].list().at(2):step.at(2);
            age = step.at(3) == ""?ls[pos].list().at(3):step.at(3);
            pro = step.at(4) == ""?ls[pos].list().at(4):step.at(4);
            class_2 = step.at(5) == ""?ls[pos].list().at(5):step.at(5);
            qDebug() << name << sex << age << pro << class_2 ;
            student temp(name,id,sex,age,pro,class_2);
            stack_stu.push({ls[pos],{4,pos}});
            ls[pos] = temp;
            cg_st.hide();
            cg_st._clear();
            Save_Data();
            on_flash_clicked();
        }
        else{
            QMessageBox::about(&cg_st,"错误","找不到该学生");
            return ;
        }
    };
    connect(&cg_st,&change_stu::change_over,this,f);

}

void MainWindow::on_returnsituation_clicked()
{
    if(stack_stu.empty()){
        QMessageBox::about(this,"错误","已恢复至初始状态");
        return;
    }
    else{
        student temp = stack_stu.top().first;
        int ver = stack_stu.top().second.first;
        int pos = stack_stu.top().second.second;
        stack_stu.pop();

        switch(ver)
        {
        case 1: //上一步是add
            ls.pop_back();
            break;
        case 2: //上一步是 delete
            ls.insert(pos,temp);
            break;
        case 3: //上一步是 add_hundred
            for(int i = 0;i<100;i++){
                ls.pop_back();
            }
            break;
        case 4:
            ls[pos] = temp;
            break;
        }

        Save_Data();
        on_flash_clicked();
        ls_flash();
    }
}

// 将ls中的内容插入到modle中
void MainWindow::on_flash_clicked()
{
    modle->clear();
    modle->setHorizontalHeaderLabels(View_Head_Labels);
    for(int i = 0;i<ls.size();i++){
        for(int j = 0;j<6;j++){
            modle->setItem(i,j,new QStandardItem(ls[i].list().at(j)));
            modle->item(i, j)->setTextAlignment(Qt::AlignCenter);
        }
    }
}

// 将ls中的内容保存到文件中
void MainWindow::Save_Data()
{
    QFile file ("a.txt");
    if (!file.open(QIODevice::WriteOnly|QIODevice::Text))   //文件打开不成功
    {
        qDebug()<<"file open failure!";
        return ;
    }
    QTextStream out(&file);
    // qDebug()<<"file open success!";

    for(int i = 0;i<ls.size();i++){
        out << ls[i];
    }
    file.close();
}

//将文件中的内容保存到ls中
void MainWindow::ls_flash(){
    hash.clear();
    ls.clear();

    QFile file ("a.txt");
    if (!file.open(QIODevice::ReadOnly|QIODevice::Text))   //文件打开不成功
    {
        // qDebug()<<"file open failure!";
        return ;
    }
    QTextStream in(&file);
    // qDebug()<<"file open success!";
    int pos = 0;
    while (!in.atEnd()){
        student step;
        in >> step;
        QString temp = step.list().at(1);
        if(!hash[temp]){
            ls.append(step);
            hash[temp] = ++pos;
        }
    }
    file.close();
}

