#include "student.h"
#include <QString>
#include <QTextStream>
#include <QStringList>
student::student(){};

student::student(const QString& studentID,const QString& name="NULL"){
    this->name = name;
    id = studentID;
    sex = age = spe = cs = "NULL";
}
student::student(const QString& name,const QString& studentID,
                 const QString& gender,const QString& age,const QString& major,const QString& className)
    : name(name), id(studentID), sex(gender), age(age), spe(major), cs(className) {};

student::student(const student& st)
{
    name = st.name;
    id = st.id;
    sex = st.sex;
    age = st.age;
    spe = st.spe;
    cs = st.cs;
}

student& student::operator= (const student& st)
{
    name = st.name;
    id = st.id;
    sex = st.sex;
    age = st.age;
    spe = st.spe;
    cs = st.cs;
    return *this;
}

QTextStream& operator<<(QTextStream& out, const student& st)
{
    QString total =st.name +" "+ st.id +" "+ st.sex + " " + st.age+ " " +  st.spe+" "+st.cs+'\n';
    out << total;
    return out;
}

QTextStream& operator>>(QTextStream& in, student& st)
{
    QString line = in.readLine();
    QStringList tokens = line.split(' ', Qt::SkipEmptyParts);

    if (!tokens.isEmpty())
        st.name = tokens.at(0);
    if (tokens.size() > 1)
        st.id = tokens.at(1);
    if (tokens.size() > 2)
        st.sex = tokens.at(2);
    if (tokens.size() >3)
        st.age = tokens.at(3);
    if (tokens.size() > 4)
        st.spe = tokens.at(4);
    if(tokens.size() > 5)
        st.cs = tokens.at(5);

    return in;
}

bool student::check()
{
    // 输入是否合法
    if(name.isEmpty() || id.isEmpty()||id.size()!=10)
        return false;
    for(QChar st : id){
        if(!st.isDigit())
            return false;
    }
    for(QChar st : age){
        if(age.isEmpty()||age=="NULL")
            break;
        if(!st.isDigit())
            return false;
    }

    return true;
}

QStringList student::list()
{
    QStringList temp;

    temp.append(name);
    temp.append(id);
    temp.append(sex);
    temp.append(age);
    temp.append(spe);
    temp.append(cs);

    return temp;
}

void student::change(const QString name,const QString gender,
                     const QString age,const QString major,const QString className)
{
    this->name = name;
    this->sex = gender;
    this->age = age;
    this->spe = major;
    this->cs = className;
}
