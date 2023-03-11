#include<iostream>
#include<string>
#include<stdexcept>
#include "name.h" 
#include"Date.h" 
using namespace std;


name::name( string a, string b,  string c,string d , Date birthh)
{
	set_salutation(a);
	set_firstname(b);
	set_middlename(c);
	set_lastname(d);
	
	
}

void name::set_salutation(string a)
{
	if((a.length())==0)
		throw invalid_argument("no enter salutation");
	else
		salutation = a;
}

void name::set_firstname(string a){
	if((a.length())==0)
		throw invalid_argument("no enter firstname");
	firstname = a;
}
void name::set_middlename(string a){
	if((a.length())==0)
		throw invalid_argument("no enter middlename");
	middlename = a;
} 
void name::set_lastname(string a){
	if((a.length())==0)
		throw invalid_argument("no enter lastname");
	lastname = a;
} 
string name::get_salutation()const{return salutation;}
string name::get_firstname()const{return firstname;}
string name::get_middlename()const{return middlename;}
string name::get_lastname()const{return lastname;}
Date name::get_birth()const{return birth;}

  

void name::print() const
{
	cout<<get_salutation()<<" "<<get_lastname()<<","<<get_firstname()<<" "<<get_middlename()<<birth.toString()<<endl;
	
}
