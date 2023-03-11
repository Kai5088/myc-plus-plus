#include <iostream>
#include <stdexcept>
#include "time.h"
using namespace std;


int main(){
	
	time t1;
	time t2(2);
	time t3(21,34);
	time t4(12,25,42);
	 
	cout<<"arguments defaulted: \n";
	t1.utime();
	cout<<endl;
	t1.stime();
	
	try 
	{
		time t5(28,31,32);
	}
	catch(invalid_argument &e)
	{
		cerr<<"\n\n fault: "<<e.what()<<endl;
	}
}
