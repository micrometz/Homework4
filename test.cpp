/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "‪E:\ECE330\homework4\employee.h"

using namespace std;

int main() 
{
  Employee
  e1 (001, "Jones", "Booker", "T", 22),
  e2 (002, "Hendrix", "Jimi", "NMI ", 14),
  e3 (003, "Morrison", "Jim", "D", 03);
  
  e1.printEmployee();
  e2.printEmployee();
  

}