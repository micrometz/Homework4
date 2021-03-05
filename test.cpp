/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include <‪E:\ECE330\homework 4\salariedemployee.h>
#include <E:\ECE330\homework 4\HourlyEmployee.h>
#include <‪E:\ECE330\homework 4\Employee.h>

using namespace std;

int main() 
{
//Employee
 // e1 (001, "Jones", "Booker", "T", 22),
 // e2 (002, "Hendrix", "Jimi", "NMI ", 14),
 // e3 (003, "Morrison", "Jim", "D", 03);
 // e1.printEmployee();
 //e2.printEmployee();
 
 SalariedEmployee 
 se1(001, "Jones", "Booker", "T", 22,10000),
 se2 (002, "Hendrix", "Jimi", "NMI ", 14,20000),
 se3 (003, "Morrison", "Jim", "D", 03,30000);
 se1.printSalariedEmployee();
 se2.printSalariedEmployee();
 se3.printSalariedEmployee();

return 0;
}