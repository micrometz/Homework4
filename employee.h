/* employee.h	*/

#ifndef EMPLOYEE
#define EMPLOYEE

#include <string>

using namespace std;

class Employee
{
public:
  Employee(long = 0, const string & ="" , const string & ="", const string & = "", int =0);	// constructor
  SalariedEmployee(long id, const string &last, const string &first, const string &initial,int dept, int sal) //constructor for salaried employee
  HourlyEmployee(long = 0, const string & ="" , const string & ="", const string & = "", int =0, int=0,int=0); // constructor for hourly employee 
  void setIdNum (const long );			// set id number
  long getIdNum () const;				// get id number
  void setLastName (const string &);	// set last name
  string getLastName () const;			// return last name
  void setFirstName (const string &);	// set first name
  string getFirstName () const;			// return first name
  void setMiddleInitial (const string &);	// set middle initial
  string getMiddleInitial () const;		// return set middle initial
  void setDeptCode(const int);			// set department code
  int getDeptCode () const;				// get department code
  void printEmployee ();				// print Employee information
 
  
  
private:
  long  myIdNum;			//Employee id number
  string myLastName;		//Employee last name
  string myFirstName;		//Employee first name
  string myMiddleInitial;	//Employee middle intial
  int myDeptCode;			//Department code
};

#endif