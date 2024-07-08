#ifndef CHANGE_STU_H
#define CHANGE_STU_H

#include <QDialog>

namespace Ui {
class change_stu;
}

class change_stu : public QDialog
{
    Q_OBJECT

public:
    explicit change_stu(QWidget *parent = nullptr);
    ~change_stu();
    QStringList list();
    QString stu_id();
    void _clear();
signals:
    void change_over();

private slots:
    void on_pushButton_clicked();
    void on_cancel_clicked();

private:
    Ui::change_stu *ui;
    QString id;
    QStringList message;
};

#endif // CHANGE_STU_H
