/* Salariedemployee.h	*/
#include <string>
#include "‪E:\ECE330\homework 4\salariedemployee.h"
using namespace std;

class SalariedEmployee: public Employee // makes it so that Salaried Employee has the base props of employees
{
public:
SalariedEmployee(long = 0, const string & ="" , const string & ="", const string & = "", int =0) //constructor for salaried employee
int monthlySalary; // monthly salary for the employee
void setSalary(int); // set monthly salary 
int getSalary(); // get monthly salary
double salaryCalculation(); //cals the salary
void printSalariedEmployee(); //prints salaried employee
double monthlySalary;
double fraction = 1.0; // hint set the fraction default to one
};
