#ifndef STUDENT_H
#define STUDENT_H
#include<QString>
#include<QTextStream>
#include <QList>
class student
{
private:
    QString name;
    QString id;
    QString sex;
    QString age;
    QString spe;
    QString cs;

public:
    student(QString name, QString studentID, QString gender, QString age, QString major, QString className);
    friend QTextStream& operator<<(QTextStream& out, const student& st);
    friend QTextStream& operator>>(QTextStream& in, student& st);
    bool check();
    QStringList list();

};

#endif // STUDENT_H
