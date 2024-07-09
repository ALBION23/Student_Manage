#ifndef COMSTUDENT_H
#define COMSTUDENT_H

#include "student.h"

class comStudent : public student
{
public:

    comStudent();

    comStudent(const QString& name,const  QString& studentID,const QString& gender,
               const QString& age,const QString& major,const QString& className);

    comStudent(const QString& studentID,const QString& name);

    comStudent(const student& st);

    int getLevel() const override;
};

#endif // COMSTUDENT_H
