#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "stu_login.h"
#include "add.h"
#include "student.h"
#include "change_stu.h"

#include <QString>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QSettings>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QTableView>
#include <QStack>

typedef std::pair<int,int> PII;
typedef std::pair<student,PII> PSI;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Save_Data();
    void ls_flash();
private slots:
    void on_smExit_clicked();

    void on_addStudent_clicked();

    void on_deleteStudent_clicked();

    void on_flash_clicked();

    void on_search_clicked();

    void on_returnsituation_clicked();

    void on_changemessage_clicked();

private:
    Ui::MainWindow *ui;
    stu_login m_dlgLogin;
    add add_st;
    change_stu cg_st;
    QList<student> ls;
    QStack<PSI> stack_stu;
    QHash<QString,int> hash;
    QStandardItemModel *modle;

};
#endif // MAINWINDOW_H
