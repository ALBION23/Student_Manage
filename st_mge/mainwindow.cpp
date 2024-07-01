#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_dlgLogin.show();
    auto f = [&](){
        this->show();
    };
    connect(&m_dlgLogin,&stu_login::sendLoginSuccess,this,f);

//   ui->treeWidget->clear();
    ui->treeWidget->setColumnCount(1);

//  ui->treeWidget->addTopLevelItem(new QTreeWidgetItem(ui->treeWidget,l));
    QTreeWidgetItem *pf = new QTreeWidgetItem(ui->treeWidget, QStringList("学生信息管理系统"));
    ui->treeWidget->addTopLevelItem(pf);

    QTreeWidgetItem *p1 = new QTreeWidgetItem(pf,QStringList("学生管理"));
    QTreeWidgetItem *p2 = new QTreeWidgetItem(pf,QStringList("管理员管理"));


    pf->addChild(p1);
    pf->addChild(p2);

    ui->treeWidget->expandAll();
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

