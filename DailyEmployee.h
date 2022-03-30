#ifndef EJERCICIO_CLASE_DAILYEMPLOYEE_H
#define EJERCICIO_CLASE_DAILYEMPLOYEE_H

#include <string.h>
#include "Employee.h"


class DailyEmployee : public Employee
        {
public:
    DailyEmployee(const string &, const string &, const string &, int workedDays, double dailyWage );
    virtual double earnings() const;
    virtual void print() const;
    void setWorkedDays( int );
    void setDailyWage( double );
    int getWorkedDays() const;
    double getDailyWage() const;

private:
    int workedDays;
    double dailyWage;
};


#endif //EJERCICIO_CLASE_DAILYEMPLOYEE_H
