#include<string>
#include"Date.h" 
using namespace std;

#ifndef NAME_H
#define NAME_H
class name
{
 public:
  name(string, string ,  string, string,   Date );
  void print()const;
  void set_salutation(string) ;
  void set_firstname(string) ;
  void set_middlename(string);
  void set_lastname(string);
  string get_salutation()const;
  string get_firstname()const;
  string get_middlename()const;
  string get_lastname()const;
  Date get_birth()const;
  
  
 private:
	
	string salutation;
	string firstname;
	string middlename;
	string lastname;
	Date birth;
};

#endif
