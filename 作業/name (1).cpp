#include<iostream>
#include<string>
#include "name.h" 
#include"Date.h" 
using namespace std;


name::name( string a, string b, string c,string d ,const Date& birthh):salutation(a),lastname(b),firstname(c),middlename(d),birth(birthh)
{}

void name::set_salutation(string a){salutation = a;}
void name::set_firstname(string a){firstname = a;}
void name::set_middlename(string a){middlename = a;} 
void name::set_lastname(string a){lastname = a;} 
string name::get_salutation()const{return salutation;}
string name::get_firstname()const{return firstname;}
string name::get_middlename()const{return middlename;}
string name::get_lastname()const{return lastname;}
Date name::get_birth()const{return birth;}

  

void name::print() const
{
	cout<<get_salutation()<<" "<<get_lastname()<<","<<get_firstname()<<" "<<get_middlename()<<birth.toString()<<endl;
	
}
