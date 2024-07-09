#include "monitor.h"

monitor::monitor()
    :student(){};

monitor::monitor(const QString& name, const QString& studentID,const  QString& gender,
                       const QString& age,const QString& major,const QString& className)
    : student(name, studentID,gender,age,major,className) {};

monitor::monitor(const QString& studentID,const QString& name="NULL")
    :student(studentID,name){};

monitor::monitor(const student& st)
    :student(st){};


int monitor::getLevel() const{
    return 1;
}
