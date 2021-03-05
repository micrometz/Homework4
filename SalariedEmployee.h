/* Salariedemployee.h	*/

#ifndef EMPLOYEE
#define EMPLOYEE

#include <string>
#include #include "‪E:\ECE330\homework4\employee.h"
using namespace std;

class SalariedEmployee: public Employee // makes it so that salriedemplyee has the base props of employees
{
public:
SalariedEmployee(long id, const string &last, const string &first, const string &initial,int dept, int sal) //constructor for salaried employee
int monthlySalary; // monthly salary for the employee
void setSalary(int); // set monthly salary 
int getSalary(); // get monthly salary
double salaryCalculation(); //cals the salary
void printSalariedEmployee(); //prints salaried employee
  
  
private:
  long  myIdNum;			//Employee id number
  string myLastName;		//Employee last name
  string myFirstName;		//Employee first name
  string myMiddleInitial;	//Employee middle intial
  int myDeptCode;			//Department code
};

#endif