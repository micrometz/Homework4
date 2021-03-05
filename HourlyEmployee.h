/* HourlyEmployee .h	*/

#ifndef EMPLOYEE
#define EMPLOYEE

#include <string>
#include #include "‪E:\ECE330\homework4\employee.h"
using namespace std;

class HourlyEmployee : public Employee // makes it so that Hourly Employee has the base props of employees
{
public:
HourlyEmployee (long id, const string &last, const string &first, const string &initial,int dept, int hw,int hr) //constructor for HourlyEmployee
int hoursWorked,hourlyRate,overTime;
double payWeekly;
void setHoursWorked(int);
int getHoursWorked();
void setHourlyRate(int);
int getHourlyRate();
double payCalculation();
void printHourlyEmployee();
  
  
private:
  long  myIdNum;			//Employee id number
  string myLastName;		//Employee last name
  string myFirstName;		//Employee first name
  string myMiddleInitial;	//Employee middle intial
  int myDeptCode;			//Department code
};

#endif