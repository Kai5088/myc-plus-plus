#ifndef employee_h
#define employee_h

#include <string>
using namespace std;

class employee
{
	public:
		employee(string,string);
		string getfirstname();
		string getlastname();
		print();
	private:
		string firstname;
		string lastname;
		unsigned int count;
};

#endif
