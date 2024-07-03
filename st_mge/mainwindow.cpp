#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add.h"
#include "student.h"
#include <map>
#include <QString>
#include <QStringList>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QSettings>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QTableWidget>
#include <QTableView>


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

    modle =new QStandardItemModel;
    ui->tableView->setModel(modle);


    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui->tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    ui->tableView->setSortingEnabled(true); //排序功能
    this->on_flash_clicked();

}

MainWindow::~MainWindow()
{
    delete ui;
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


void MainWindow::on_deleteStudent_clicked()
{
    // 获取选中的模型索引
    QItemSelectionModel *selectionModel = ui->tableView->selectionModel();
    QModelIndexList selectedRows = selectionModel->selectedRows();

    // 如果没有选中行，不进行操作
    if (selectedRows.isEmpty()) {
        QMessageBox::about(this,"错误","请选中相应行");
        return;
    }

    int rowToDelete = selectedRows.first().row();

    // 删除选中的行
    QModelIndex index = modle->index(rowToDelete, 1);
    QVariant data = modle->data(index);
    QString rowData = data.toString();
    int pos = hash[rowData];
    ls.takeAt(pos);
    hash[rowData] = 0;
    modle->removeRow(rowToDelete);
    Save_Data();
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
    int pos = -1;
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
    for(int i = 0;i<ls.size();i++){
        for(int j = 0;j<6;j++)
            modle->setItem(i,j,new QStandardItem(ls[i].list().at(j)));
    }
}

void MainWindow::on_search_clicked()
{

    QString  str = ui->searchEdit->text();
    if(str.isEmpty()){
        QMessageBox::about(this,"错误","请在搜索框内输入内容");
    }
    else{
        modle->clear();
        int pos = 0;
        for(int i = 0;i<ls.size();i++){
            if(ls[i].list()[0].indexOf(str)!=-1 ||ls[i].list()[1].indexOf(str)!=-1 ){
                for(int j = 0;j<6;j++)
                    modle->setItem(pos,j,new QStandardItem(ls[i].list().at(j)));
                pos++;
            }
        }

        if(!pos){
            QMessageBox::about(this,"错误","搜索结果为空");
        }
    }

}
void MainWindow::Save_Data()
{
//    ls_flash();
    QFile file ("a.txt");
    if (!file.open(QIODevice::WriteOnly|QIODevice::Text))   //文件打开不成功
    {
        qDebug()<<"file open failure!\n";
        return ;
    }
    QTextStream out(&file);
    qDebug()<<"file open success!\n";

    for(int i = 0;i<ls.size();i++){
        out << ls[i];
    }

    file.close();
}

void MainWindow::ls_flash()
{
    ls.clear();
    hash.clear();
    int rows = modle->rowCount();
    int cols = modle->columnCount();
    for (int row = 0; row < rows; ++row) {
        QStringList rs;

        for (int col = 0; col < cols; ++col) {
            QModelIndex index = modle->index(row, col);
            QVariant data = modle->data(index);
            rs.append(data.toString());
        }

        student st(rs[0],rs[1],rs[2],rs[3],rs[4],rs[5]);
        ls.append(st);
        hash[rs[1]] = 1;
    }
}
