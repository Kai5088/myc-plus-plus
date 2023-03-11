#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "time.h"
using namespace std;


time::time(int hour,int minute,int second)
{
	settime(hour,minute,second);
}

void time::settime(int h,int m,int s)
{
	sethour(h);
	setminute(m);
	setsecond(s);
	
}

void time::sethour(int h)
{
	if(h>=0&&h<=24)
	hour=h;
	else
	throw invalid_argument("hour in 0-23");
}

void time::setminute(int m)
{
	if(m>=0&&m<=60)
	minute=m;
	else
	throw invalid_argument("minute in 0-23");
}

void time::setsecond(int s)
{
	if(s>=0&&s<=60)
	second=s;
	else
	throw invalid_argument("second in 0-23");
}

unsigned int time::gethour()const
{
	return hour;
}

unsigned int time::getminute()const
{
	return minute;
}

unsigned int time::getsecond()const
{
	return second;
}

void time::utime()const
{
	cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<endl;
}

void time::stime()const
{
	cout<<((hour==0||hour==12)?12:hour%12)<<":"<<setfill('0')<<setw(2)<<minute<<":"<<setw(2)<<second<<(hour<12?"AM":"PM");
}


