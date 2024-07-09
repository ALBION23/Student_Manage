#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add.h"
#include "student.h"
#include "comstudent.h"
#include "monitor.h"
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

    auto m = [&](){
        ls_flash();
        on_flash_clicked();
        comStudent* st = new comStudent;
        *st = *ls.back();
        stack_stu.push({st,{1,ls.size()-1}});
    };


    connect(&m_dlgLogin,&stu_login::sendLoginSuccess,this,&MainWindow::check_login);

    connect(&add_st,&add::add_over,this,m);

    connect(&add_st,&add::add_hundred,this,&MainWindow::add_hundred);

    connect(&cg_st,&change_stu::change_over,this,&MainWindow::change_message);

    connect(this,&MainWindow::sendLevel,&cg_st,&change_stu::hideChangeLevel);

    modle =new QStandardItemModel;
    ui->tableView->setModel(modle);


    View_Head_Labels << "姓名"<<"学号"<<"性别"<<"年龄"<<"专业"<<"班级"<<"职位";
    //不可修改
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //列宽自动拉伸
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
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

    for(int i = 0;i<ls.size();i++)
        delete ls[i];
    while(!stack_stu.empty()){
        delete stack_stu.top().first;
        stack_stu.pop();
    }
}

void MainWindow::check_login(const QString& usrname,const QString& passwd)
{
    if(usrname == "admin" && passwd == "123456"){
        this->show();
        usrLevel = INT_MAX;
        m_dlgLogin.hide();
    }
    else{
        for(int i = 0;i<ls.size();i++){
            if(ls[i]->list().at(0) == usrname && ls[i]->list().at(1) == passwd )
            {
                this->show();
                usrLevel = ls[i]->getLevel();
                m_dlgLogin.hide();
                return ;
            }
        }

        QMessageBox::about(&m_dlgLogin,"错误","用户名或密码错误");
    }
}

void MainWindow::on_smExit_clicked()
{
    m_dlgLogin.show();
    this->hide();
}


void MainWindow::on_addStudent_clicked()
{
    if(usrLevel < 2)
    {
        QMessageBox::about(this,"错误","您的权限不足");
        return ;
    }

    add_st.show();
}

void MainWindow::add_hundred()
{

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
            ls.append(new comStudent(number, QString::number(i)));
            i++;
        }
    }

    stack_stu.push({new comStudent(),{3,0}});

    Save_Data();
    on_flash_clicked();
}

void MainWindow::on_search_clicked()
{
    QString str = ui->searchEdit->text();

    if(str.isEmpty()){
        QMessageBox::about(this,"错误","请在搜索框内输入内容");
    }
    else{
        modle -> clear();
        modle -> setHorizontalHeaderLabels(View_Head_Labels);

        int pos = 0;
        for(int i = 0;i<ls.size();i++){
            if(ls[i]->list()[0].indexOf(str)!=-1 ||ls[i]->list()[1].indexOf(str)!=-1 )
            {
                for(int j = 0;j<6;j++){
                    modle->setItem(pos,j,new QStandardItem(ls[i]->list().at(j)));
                    modle->item(pos, j)->setTextAlignment(Qt::AlignCenter);
                }

                if(ls[i]->getLevel()){
                    modle->setItem(i,6,new QStandardItem("班长"));
                }
                else{
                    modle->setItem(i,6,new QStandardItem("普通学生"));
                }
                modle->item(i, 6)->setTextAlignment(Qt::AlignCenter);

                pos++;
            }

        }

        if(!pos){
            QMessageBox::about(this,"错误","搜索结果为空");
        }

        ui->searchEdit->clear();
    }

}

void MainWindow::on_search_2_clicked()
{
    QString  str = ui->searchEdit_2->text();
    QString  age = ui->ageSearch->currentText();
    QString  sex = ui->sexSearch->currentText();
    QString  major = ui->majorSearch->currentText();
    QString  _class = ui->classSearch->currentText();
    int level;

    if(ui->levelSearch->currentText() == "无")
        level = -1;
    else if(ui->levelSearch->currentText() == "班长"){
        level = 1;
    }
    else
        level = 0;

    modle->clear();
    modle -> setHorizontalHeaderLabels(View_Head_Labels);

    int pos = 0;
    for(int i = 0;i<ls.size();i++){

        if(sex!=ls[i]->list().at(2))
            continue;

        if(age != "无" && age!=ls[i]->list().at(3))
            continue;

        if(major != "无" && major!=ls[i]->list().at(4))
            continue;

        if(_class != "无" && _class!=ls[i]->list().at(5))
            continue;

        if(!str.isEmpty())
        {
            if(ls[i]->list().at(0).indexOf(str)==-1 && ls[i]->list().at(1).indexOf(str) ==-1){
                continue;
            }
        }

        if(level != -1 && level != ls[i]->getLevel())
            continue;

        for(int j = 0;j<6;j++){
            modle->setItem(pos,j,new QStandardItem(ls[i]->list().at(j)));
            modle->item(pos, j)->setTextAlignment(Qt::AlignCenter);
        }

        if(ls[i]->getLevel()){
            modle->setItem(pos,6,new QStandardItem("班长"));
        }
        else{
            modle->setItem(pos,6,new QStandardItem("普通学生"));
        }

        modle->item(pos, 6)->setTextAlignment(Qt::AlignCenter);
        pos++;
    }

    if(!pos){
        QMessageBox::about(this,"错误","搜索结果为空");
    }

    ui->searchEdit_2->clear();

}

void MainWindow::on_deleteStudent_clicked()
{
    if(usrLevel < 2)
    {
        QMessageBox::about(this,"错误","您的权限不足");
        return ;
    }

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
        hash_flash();
    }
}


void MainWindow::on_changeMessage_clicked()
{
    if(usrLevel < 1)
    {
        QMessageBox::about(this,"错误","您的权限不足");
        return ;
    }
    emit sendLevel(usrLevel);

    cg_st.show();

}

void MainWindow::change_message(const QString& id,const QStringList& step)
{
    if(hash[id]){

        int pos = hash[id] -1 ;
        QString name;
        QString sex;
        QString age;
        QString major;
        QString _class;
        int level;

        name = step.at(0) == ""?ls[pos]->list().at(0):step.at(0);
        sex = step.at(2) == ""?ls[pos]->list().at(2):step.at(2);
        age = step.at(3) == ""?ls[pos]->list().at(3):step.at(3);
        major = step.at(4) == ""?ls[pos]->list().at(4):step.at(4);
        _class = step.at(5) == ""?ls[pos]->list().at(5):step.at(5);
        level = step.at(6) == "普通学生"? 0:1;
        // qDebug() << name << sex << age << major << _class << level << step.at(6);
        /*            if(usrLevel <= 1)
                level = ls[pos]->getLevel();
*/
        if(!age_hash[age]){
            age_hash[age]++;
            ui->ageSearch->addItem(age);
        }
        if(!major_hash[major]){
            major_hash[major]++;
            ui->majorSearch->addItem(major);
        }
        if(!class_hash[_class]){
            class_hash[_class]++;
            ui->ageSearch->addItem(_class);
        }

        // qDebug() << name << sex << age << major << _class ;
        if (ls[pos]->getLevel()) {
            monitor *temp = new monitor(*(ls[pos]));
            stack_stu.push({temp, {4, pos}});
        }
        else {
            comStudent *temp = new comStudent(*(ls[pos]));
            stack_stu.push({temp, {4, pos}});
        }
        if(level){
            monitor* monPtr =new monitor(*(ls[pos]));
            monPtr->change(name,sex,age,major,_class);
            delete ls[pos];
            ls[pos] = monPtr;
        }
        else{
            comStudent* comPtr = new comStudent(*(ls[pos]));
            comPtr->change(name,sex,age,major,_class);
            delete ls[pos];
            ls[pos] = comPtr;
        }

        cg_st.hide();
        cg_st._clear();

        Save_Data();
        on_flash_clicked();
    }
    else{
        QMessageBox::about(&cg_st,"错误","找不到该学生");
        return ;
    }
}

void MainWindow::on_returnSituation_clicked()
{
    if(stack_stu.empty()){
        QMessageBox::about(this,"错误","已恢复至初始状态");
        return;
    }
    else{
        auto temp = stack_stu.top().first;
        int ver = stack_stu.top().second.first;
        int pos = stack_stu.top().second.second;

        stack_stu.pop();

        switch(ver)
        {
        case 1: //上一步是add
            delete ls.back();
            ls.pop_back();
            delete temp;
            break;

        case 2: //上一步是 delete
            ls.insert(pos,temp);
            break;

        case 3: //上一步是 add_hundred
            for(int i = 0;i<100;i++){
                delete ls.back();
                ls.pop_back();
            }
            delete temp;
            break;

        case 4: //上一步是 change
            delete ls[pos];
            ls[pos] = temp;
            break;
        }

        Save_Data();
        on_flash_clicked();
        hash_flash();
    }
}

// 将ls中的内容插入到modle中
void MainWindow::on_flash_clicked()
{
    modle->clear();
    modle->setHorizontalHeaderLabels(View_Head_Labels);

    for(int i = 0;i<ls.size();i++){

        for(int j = 0;j<6;j++){
            modle->setItem(i,j,new QStandardItem(ls[i]->list().at(j)));
            modle->item(i, j)->setTextAlignment(Qt::AlignCenter);
        }

        if(ls[i]->getLevel()){
            modle->setItem(i,6,new QStandardItem("班长"));
        }
        else{
            modle->setItem(i,6,new QStandardItem("普通学生"));
        }

        modle->item(i, 6)->setTextAlignment(Qt::AlignCenter);
    }
}

// 将ls中的内容保存到文件中
void MainWindow::Save_Data()
{
    QFile file ("student.txt");

    if (!file.open(QIODevice::WriteOnly|QIODevice::Text))   //文件打开不成功
    {
        qDebug()<<"file open failure!";
        return ;
    }

    QTextStream out(&file);
    qDebug()<<"file open success!";

    for(int i = 0;i<ls.size();i++){
        out <<ls[i]->getLevel()<<" "<<*ls[i];
    }
    file.close();
}

//将文件中的内容保存到ls中
void MainWindow::ls_flash()
{
    hash.clear();
    ls.clear();

    ui->ageSearch->clear();
    ui->majorSearch->clear();
    ui->classSearch->clear();

    QFile file ("student.txt");

    if (!file.open(QIODevice::ReadOnly|QIODevice::Text))   //文件打开不成功
    {
        // qDebug()<<"file open failure!";
        return ;
    }

    QTextStream in(&file);
    // qDebug()<<"file open success!";

    int pos = 0;

    while (!in.atEnd()){
        int level;
        in >> level;
        student* step;
        if(level){
            step = new monitor;
        }
        else
            step = new comStudent;
        in >> *step;
        QStringList temp = step->list();

        if(!hash[temp.at(1)]){
            ls.append(step);
            hash[temp.at(1)] = ++pos;
        }
        age_hash[temp.at(3)]++;
        major_hash[temp.at(4)]++;
        class_hash[temp.at(5)]++;
    }

    QStringList age;
    age<<"无"<<age_hash.keys();
    QStringList major;
    major<<"无"<<major_hash.keys();
    QStringList _class;
    _class<<"无"<<class_hash.keys();

    ui->ageSearch->addItems(age);
    ui->majorSearch->addItems(major);
    ui->classSearch->addItems(_class);

    file.close();
}

void MainWindow::hash_flash()
{
    hash.clear();

    for(int i = 0;i<ls.size();i++){
        QString temp = ls[i]->list().at(1);
        hash[temp] = i+1;
    }
}


