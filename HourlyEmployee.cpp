/* HourlyEmployee .cpp*/
#include <iostream>
#include <iomanip>
#include <string>

#include "‪E:\ECE330\homework4\HourlyEmployee.h"
#include "‪E:\ECE330\homework4\employee.h"

using namespace std;

// constructor

HourlyEmployee ::HourlyEmployee (long id, const string &last, const string &first, const string &initial,int dept, int hw,int hr)
{
hoursWorked=hw;

hourlyRate=hr;

overTime=0;

payWeekly=0.0;

myIdNum = id;

myLastName = last;

myFirstName = first;

myMiddleInitial = initial;

myDeptCode = dept;
}

// Accessor function defintions
void HourlyEmployee ::setHoursWorked(int hw) // set hours worked
{
hoursWorked=hw;
}

int HourlyEmployee ::getHoursWorked() // get hours worked
{
return hoursWorked;
}
void HourlyEmployee::setHourlyRate(int hr) // set hourly rate
{
hourlyRate=hr;
}

int HourlyEmployee::getHourlyRate() // get hourly rate
{
return hourlyRate;
}

double HourlyEmployee ::payCalculation() // calculate the hourly
{
if () // if statment to check if they have worked over 40 hours if they do the extra hours is calucated with over time included  
{
overTime=hoursWorked- 40; //hours worked in overtime
payWeekly= (hourlyRate*40) + (hourlyRate*overTime*1.5); // (normal pay) + (hourly pay * hours in over time * 1.5 times the regular hourly rate)
return payWeekyly;
}
else // normal pay rate 
{
payWeekly= hourlyRate*hoursworked; // hours worked * hours rate 
return payWeekyly;
}
}

void HourlyEmployee :: printHourlyEmployee  ()			// print Hourly Employee  information
{
cout << endl;
cout << "Employee  ID Number: " << getIdNum() << endl;
cout << "Name: " << getLastName() <<", " << getFirstName() << " " <<
  getMiddleInitial() <<"." << endl;
cout << "Dept Code: " << getDeptCode () << endl;  
cout << "employee's Hours Worked : " <<HourlyEmployee::getHoursWorked () << endl; // prints employee's hours worked
cout << "employee's Hourly Rate : " <<HourlyEmployee::getHourlyRate () << endl; // prints employee's hourly rate
cout << "employee's Weekly Payout : " <<HourlyEmployee::payCalculation () << endl; //prints employee's weekly payout
}
