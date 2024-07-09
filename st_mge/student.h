#ifndef STUDENT_H
#define STUDENT_H
#include <QString>
#include <QTextStream>
#include <QStringList>
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
    student();

    student(QString studnetID,QString name);

    student(QString name, QString studentID, QString gender, QString age, QString major, QString className);

    student(const student& st);

    student operator= (const student & st);

    friend QTextStream& operator<<(QTextStream& out, const student& st);

    friend QTextStream& operator>>(QTextStream& in, student& st);

    bool check();

    QStringList list();

};

#endif // STUDENT_H
