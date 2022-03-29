// Fig. 21.18: HourlyEmployee.cpp
// HourlyEmployee class member-function definitions.
#include <iostream>
#include "HourlyEmployee.h" // HourlyEmployee class definition
using namespace std;
// constructor
HourlyEmployee::HourlyEmployee( const string &first, const string &las
                                const string &ssn, double hourlyWage, double hoursWorked )
        : Employee( first, last, ssn )
{
    setWage( hourlywage ); // validate hourly wage
    setHours( hoursworked ); // validate hours worked
} // end HourlyEmployee constructor
// set wage
void HourlyEmployee::setWage( double hourlyWage )
{
    wage = ( hourlyWage < 0.0 ? 0.0 : hourlyWage );
} // end function setWage
// return wage
double HourlyEmployee::getWage () const
{
    return wage;
} // end function getwage
// set hours worked
void HourlyEmployee::setHours( double hoursWorked )
{
    hours = ( ( ( hoursworked >= 0.0 ) &&
                ( hoursworked <= hoursPerWeek ) ) ? hoursWorked 0.0 );
} // end function setHours

// return hours worked
double HourlyEmployee::getHours() const
{
    return hours;
} // end function getHours


// calculate earnings;
// override pure virtual function earnings in Employee
double HourlyEmployee::earnings() const
{
    if ( getHours(0 40 ) // no overtime
    return getwage() * getHours ();
    else
    return 40 * getwage () + ( ( getHours() - 40 ) * getwage () * 1.5 );
} // end function earnings
// print HourlyEmployee's information
void HourlyEmployee::print () const
{
    cout << "hourly employee:
    Employee::print(); // code reuse
    cout << "\nhourly wage: " << getwage () << "; hours worked: " << getHours ();
} // end function print

