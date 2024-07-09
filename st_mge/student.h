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

    student(const QString& studentID,const QString& name);

    student(const QString& name,const  QString& studentID,const QString& gender,
            const QString& age,const QString& major,const QString& className);

    student(const student& st);

    student& operator= (const student & st);

    friend QTextStream& operator<<(QTextStream& out, const student& st);

    friend QTextStream& operator>>(QTextStream& in, student& st);

    bool check();

    QStringList list();

    void change(const QString name,const QString gender,
                const QString age,const QString major,const QString className);

    virtual int getLevel() const = 0;

    virtual ~student() {};
};

#endif // STUDENT_H
