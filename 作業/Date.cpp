// Fig. 9.15: Date.cpp
// Date class member-function definitions.
#include <sstream>
#include<iostream>
#include <string>
#include<array> 
#include "Date.h" // include definition of class Date from Date.h
using namespace std;

// Date constructor (should do range checking)
Date::Date(unsigned int m, unsigned int d, unsigned int y) 
   : month{m}, day{d}, year{y} {}

// print Date in the format mm/dd/yyyy
string Date::toString() const {
   ostringstream output;
   output << month << '/' << day << '/' << year;
   return output.str();
}
void Date :: tick()
{
	
	int i{0},tmp{0};
	for(i = 1;i<800;i++)
	{
		static const array< int, 13 > daysPerMonth = 
      {  0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
			tmp = (day +1)/(((year%400 == 0)||((year%4 == 0)&&(year%100 != 0))&&(month == 2))?(29+1):daysPerMonth[month]+1);
			if(tmp ==1)
				day = 1;
			else
				day = (day +1);
			
			
			if((month+tmp)==13)
			{
				month = 1;
				year++;	
			}
			else 
				month = (month+tmp);
		
			tmp = 0;
			cout<<toString()<<endl;
		} 
		
} 


