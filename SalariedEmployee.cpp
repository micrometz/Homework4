
/* salariedemployee.cpp*/
#include <iostream>
#include <iomanip>
#include <string>
#include "‪E:\ECE330\homework4\salariedemployee.h"
#include "‪E:\ECE330\homework4\employee.h"
using namespace std;

// constructor

salariedemployee::salariedemployee( long id, const string &last, const string &first, const string &initial, int dept, int sal)
{
monthlysalary=sal;
myIdNum=id;
myLastName = last;
myFirstName = first;
myMiddleInitial = initial;
myDeptCode = dept;
}

// Accessor function defintions
void SalariedEmployee::setSalary(int sal) // set Salary 
{
monthlySalary=sal;
}

int SalariedEmployee::getSalary() // get salary
{
return monthlySalary;
}

double SalariedEmployee::salary_calculation() // calculate the salary
{
 double fraction = 1.0; // hint set the fraction default to one
 return monthlySalary*fraction;
}

void salariedemployee:: printsalariedemployee ()			// print salariedemployee information
{
  cout << endl;
  cout << "employee ID Number: " << getIdNum() << endl; 
  cout << "Name: " << getLastName() <<", " << getFirstName() << " " <<
		getMiddleInitial() <<"." << endl;
  cout << "Dept Code: " << getDeptCode () << endl;  
}
