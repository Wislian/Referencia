//
// Created by sebas on 29/03/2022.
//

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

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    int workedDays;
    double dailyWage;
};


#endif //EJERCICIO_CLASE_DAILYEMPLOYEE_H
