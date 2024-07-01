#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stu_login.h"

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

private slots:
    void on_smExit_clicked();
//signals:
 //   void user_exit();
private:
    Ui::MainWindow *ui;
    stu_login m_dlgLogin;
};
#endif // MAINWINDOW_H
