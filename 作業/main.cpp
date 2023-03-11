#include<iostream>
#include <string>
#include "name.h"
using namespace std;

int main()
{
 	Date birth;
	 name Employee1("boss","kai","kmsd","yang",birth);
	name Employee2("manger","wei","yun","liu",birth);
	cout << "Employee1's name is: ";
	Employee1.print();
 	cout << "Employee2's name is: ";
	 Employee2.print();
	 cout << "fix Employee2's salutation to eeee: \n";
	 Employee2.set_salutation("daisljd");
	 cout << "Employee2 after fixed: \n";
	 Employee2.print();
	 system("pause");
	return 0;
}


