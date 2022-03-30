#include "DailyEmployee.h"
#include <iostream>
using namespace std;

DailyEmployee::DailyEmployee(const string &first, const string &last, const string &ssn, int workedDays, double dailyWage )
    : Employee( first, last, ssn)
    {
    setWorkedDays( workedDays );
    setDailyWage( dailyWage );
}

void DailyEmployee::setWorkedDays(int days) {
    workedDays = days;
}

void DailyEmployee::setDailyWage(double wage ) {
    dailyWage = wage;
}

double DailyEmployee::getDailyWage() const {
    return dailyWage;
}

int DailyEmployee::getWorkedDays() const {
    return workedDays;
}

double DailyEmployee::earnings() const {
    if( getWorkedDays() > 0 )
        return getDailyWage() * getWorkedDays();
    else
        return 0;
}

void DailyEmployee::print() const {
    cout << "Daily employee: ";
    Employee::print();
    cout << "\ndaily wage: " << getDailyWage() << "; days worked: " << getWorkedDays();
}

