#ifndef ADD_H
#define ADD_H

#include <QDialog>
#include <QString>
#include "student.h"
namespace Ui {
class add;
}
class add : public QDialog
{
    Q_OBJECT
public:
    explicit add(QWidget *parent = nullptr);
    ~add();
signals:
    void add_over();
private slots:
    void on_pushButton_clicked();
    void addDATA(student& st);

private:
    Ui::add *ui;
};

#endif // ADD_H
