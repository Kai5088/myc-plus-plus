#include <iostream>

#include "date.h"

using namespace std;



int main() {
	date date1(7,4,2014);
	date date2;
	
	cout<<"date1: ";
	date1.print();
	cout<<"date2: ";
	date2.print();
	
	return 0;
}
