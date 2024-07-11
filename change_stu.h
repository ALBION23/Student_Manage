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

    void _clear();

    void hideChangeLevel(int usrLevel);

signals:
    void change_over(const QString& id,const QStringList& step);

private slots:
    void on_pushButton_clicked();

    void on_cancel_clicked();

private:
    Ui::change_stu *ui;
};

#endif // CHANGE_STU_H
