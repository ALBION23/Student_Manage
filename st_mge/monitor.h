#ifndef MONITOR_H
#define MONITOR_H

#include "student.h"

class monitor : public student
{
public:

    monitor();

    monitor(const QString& name,const  QString& studentID,const QString& gender,
               const QString& age,const QString& major,const QString& className);

    monitor(const QString& studentID,const QString& name);

    monitor(const student& st);

    int getLevel() const override;
};

#endif // MONITOR_H
