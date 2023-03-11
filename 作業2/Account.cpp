// Member-function definitions for class Account.
#include <stdexcept>
#include <iostream>
#include "Account.h" // include definition of class Account
using namespace std;

Account::Account(double origin)
	:balance(0.0)
{
	if(origin>=0.0)
	balance=origin;
	else 
		throw invalid_argument("Origin balance can not be negative.");
}

void Account::credit(double amount)
{
	balance=balance+amount;
}


bool Account::debit(double amount)
{
	if(amount>balance)
	{
		cout<<"Debit exceed account."<<endl;
		return false;
	}
	else
	{
		balance=balance-amount;
		return true;
	}
}

void Account::setBalance( double newbalance)
{
	balance=newbalance;
}

double Account::getBalance()
{
	return balance;
}


