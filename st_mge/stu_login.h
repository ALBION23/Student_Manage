#ifndef STU_LOGIN_H
#define STU_LOGIN_H

#include <QWidget>

namespace Ui {
class stu_login;
}

class stu_login : public QWidget
{
    Q_OBJECT

public:
    explicit stu_login(QWidget *parent = nullptr);
    ~stu_login();
private slots:
    void on_btlogin_clicked();

    void on_btexit_clicked();

signals:
    void sendLoginSuccess(const QString& usrname,const QString& passwd);

private:
    Ui::stu_login *ui;
};

#endif // STU_LOGIN_H
