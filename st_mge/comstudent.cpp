#include "comstudent.h"
#include "student.h"

comStudent::comStudent()
    :student(){};

comStudent::comStudent(const QString& name, const QString& studentID,const  QString& gender,
                       const QString& age,const QString& major,const QString& className)
    : student(name, studentID,gender,age,major,className) {};

comStudent::comStudent(const QString& studentID,const QString& name="NULL")
    :student(studentID,name){
};

comStudent::comStudent(const student& st)
    :student(st){
};


int comStudent::getLevel() const{
    return 0;
}
