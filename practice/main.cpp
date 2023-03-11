#include<iostream>
#include <string>
#include "name.h"
#include<stdexcept>
using namespace std;

int main()
{
 	Date birth;
	 name Employee1("boss","jyun","kai","yang",birth);
	name Employee2("manager","wei","Wfja","wang",birth);
	cout << "Employee1's name is: ";
	Employee1.print();
 	cout << "Employee2's name is: ";
	 Employee2.print();
	 cout << "fix Employee2's salutation to eeee: \n";
	 Employee2.set_salutation("eeee");
	 cout << "Employee2 after fixed: \n";
	 Employee2.print();
	 try{
	 	name Employee5("","jyun","kai","yang",birth);
	}
	 catch(invalid_argument &e)
	 {
	 	cerr<<" Exception while initializing: "<<e.what()<<endl;
	  } 
	
	 system("pause");
	return 0;
}


