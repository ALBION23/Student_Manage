#include "student.h"
#include <QString>
#include <QTextStream>
#include <QList>
student::student(QString name, QString studentID, QString gender, QString age="NULL", QString major="NULL", QString className="NULL")
    : name(name), id(studentID), sex(gender), age(age), spe(major), cs(className) {
};

QTextStream& operator<<(QTextStream& out, const student& st) {
    QString total =st.name +" "+ st.id + " " + st.sex + " " + st.age+ " " +  st.spe+" "+st.cs+'\n';
    out << total;
    return out;
}
QTextStream& operator>>(QTextStream& in, student& st) {
    QString line = in.readLine();
    QStringList tokens = line.split(' ', Qt::SkipEmptyParts);

    if (!tokens.isEmpty())
        st.name = tokens.at(0);
    if (tokens.size() > 1)
        st.id = tokens.at(1);
    if (tokens.size() > 2)
        st.sex = tokens.at(2);
    if (tokens.size() > 3)
        st.age = tokens.at(3);
    else
        st.age ="NULL";
    if (tokens.size() > 4)
        st.spe = tokens.at(4);
    else
        st.spe = "NULL";
    if(tokens.size() > 5)
        st.cs = tokens.at(5);
    else
        st.cs = "NULL";

    return in;
}
bool student::check(){
    // 输入是否合法
    if(name.isEmpty() || id.isEmpty()||id.size()!=10)
        return false;
    for(QChar st : id){
        if(!st.isDigit())
            return false;
    }
    for(QChar st : age){
        if(age == "NULL")
            break;
        if(!st.isDigit())
            return false;
    }

    return true;
}

QStringList student::list(){
    QStringList temp;
    temp.append(name);
    temp.append(id);
    temp.append(sex);
    temp.append(age);
    temp.append(spe);
    temp.append(cs);
    return temp;
}
