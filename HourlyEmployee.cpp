
/* HourlyEmployee .cpp*/
#include <iostream>
#include <iomanip>
#include <string>
#include "‪E:\ECE330\homework4\HourlyEmployee .h"
#include "‪E:\ECE330\homework4\employee.h"
using namespace std;

// constructor

HourlyEmployee ::HourlyEmployee ( long id, const string &last, const string &first, const string &initial, int dept, int sal)
{
monthlysalary=sal;
myIdNum=id;
myLastName = last;
myFirstName = first;
myMiddleInitial = initial;
myDeptCode = dept;
}

// Accessor function defintions
void HourlyEmployee ::setSalary(int sal) // set Salary 
{

}

int HourlyEmployee ::getSalary() // get salary
{

}

double HourlyEmployee ::salary_calculation() // calculate the salary
{

}

void HourlyEmployee :: printHourlyEmployee  ()			// print HourlyEmployee  information
{
  cout << endl;
  cout << "HourlyEmployee  ID Number: " << getIdNum() << endl;
  cout << "Name: " << getLastName() <<", " << getFirstName() << " " <<
		getMiddleInitial() <<"." << endl;
  cout << "Dept Code: " << getDeptCode () << endl;  
}
