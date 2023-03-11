#include <iostream>
#include <string>
#include "employee.h"
using namespace std;
employee::employee(string f,string l)
:firstname(f),lastname(l){}

string employee::getfirstname()
{
	return firstname;
}

string employee::getlastname()
{
	return lastname;
}

employee::print()
{
	cout<<getfirstname()<<" "<<getlastname()<<endl;
}
