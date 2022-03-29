#include <iostream>
#include "SalariedEmployee.h" // SalariedEmployee class def
using namespace std;
// constructor
SalariedEmployee::SalariedEmployee( const string &first,
                                     const string &last, const string &ssn, double salary )
        : Employee( first, last, ssn )
{
    setWeeklySalary( salary );
} // end SalariedEmployee constructor

// set salary
void SalariedEmployee::setWeeklySalary( double salary ){
weeklySalary ( salary < 0.0 ) ? 0.0 : salary;
} // end function setweeklySalary
// return salary
double SalariedEmployee::getWeeklySalary() const{
return weeklySalary;
} // end funcțion getweeklysalary

// calculate earnings:
// override pure virtual function earnings in Emplayee
double Salariedtmployee::earnings() const{
return getweeklySalary();
} // end function earnings

// print Salariedemployee's information
void SalariedEmployee::print() const{
cout << "salaried employee: ";
Employee::print(); // reuse abstract hase-class print function
cout << "\nweekly salary:" << getweeklySalary();
} // end function print