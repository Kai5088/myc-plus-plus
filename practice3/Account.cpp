// Member-function definitions for class Account.
#include <stdexcept>
#include <iostream>
#include "Account.h" // include definition of class Account
using namespace std;
	Account::Account( double initialBalance ):balance(0.0)
	{
		if(initialBalance>= 0.0)
			balance = initialBalance;
		else
			throw invalid_argument("initial Balance cannot be negative");
			
	}
   void Account::credit( double amount)
   {
   		balance = balance + amount;
   }
   bool Account::debit( double  amount)
   {
   		if(amount > balance)
   		{
   			cout<<"Debit amount exceeded account balance. "<<endl;
			 return false;	
		}
		else
		{
			balance = balance - amount;
			return true;
		}
   }
   void Account::setBalance( double a)
   {
   		if(a < 0)
   		{
   			throw invalid_argument("Balance cannot be negative");	
		}
		else
		{
			balance = a;
		}
   }
   double Account::getBalance() const
   {
   		return balance;
   }
