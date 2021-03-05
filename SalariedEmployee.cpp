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
Employee::myIdNum=id;
Employee::myLastName = last;
Employee::myFirstName = first;
Employee::myMiddleInitial = initial;
Employee::myDeptCode = dept;
monthlysalary=sal;
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

double SalariedEmployee::salaryCalculation() // calculate the salary
{
  return monthlySalary*fraction;
}

void salariedemployee:: printsalariedemployee ()			// print salariedemployee information
{
  cout << endl;
  cout << "employee ID Number: " << getIdNum() << endl; 
  cout << "Name: " << getLastName() <<", " << getFirstName() << " " <<
		getMiddleInitial() <<"." << endl;
  cout << "Dept Code: " << getDeptCode () << endl;  
  cout << " employee's Salary is : " <<SalariedEmployee::salaryCalculation () << endl; // prints out the salary of the employee
}
