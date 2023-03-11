// Member-function definitions for class CheckingAccount.
#include <iostream>
#include <stdexcept>
#include "CheckingAccount.h" // CheckingAccount class definition
using namespace std;

CheckingAccount::CheckingAccount( double origin, double fee)
	:Account(origin),transactionFee(0.0)
{
	if(fee>=0.0)
	transactionFee=fee;
	else
		throw invalid_argument("transactionFee must >= 0.0 ");		
}

void CheckingAccount::credit( double amount)
{
	Account::credit(amount);
	chargeFee();
}

bool CheckingAccount::debit( double amount)
{
	bool success=Account::debit(amount);
	
	if(success)
	{
		chargeFee();
		return true;
	}
	else
		return false;
}


void CheckingAccount::chargeFee()
{
	Account::setBalance(getBalance()-transactionFee);
	cout<<"$ "<<transactionFee<<"transactionFee fee charge."<<endl;
}
