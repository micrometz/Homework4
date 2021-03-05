
/* HourlyEmployee .cpp*/
#include <iostream>
#include <iomanip>
#include <string>
#include "‪E:\ECE330\homework4\HourlyEmployee .h"
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

int HourlyEmployee ::setHoursWorked() // get hours worked
{

}
void HourlyEmployee::setHourlyRate(int hr)
{

}

int HourlyEmployee::getHourlyRate()
{

}

double HourlyEmployee ::payCalculation() // calculate the hourly
{

}

void HourlyEmployee :: printHourlyEmployee  ()			// print Hourly Employee  information
{
  cout << endl;
  cout << "Employee  ID Number: " << getIdNum() << endl;
  cout << "Name: " << getLastName() <<", " << getFirstName() << " " <<
		getMiddleInitial() <<"." << endl;
  cout << "Dept Code: " << getDeptCode () << endl;  
}
