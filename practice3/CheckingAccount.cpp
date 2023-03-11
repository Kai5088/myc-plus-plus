// Member-function definitions for class CheckingAccount.
#include <iostream>
#include <stdexcept>
#include "CheckingAccount.h" // CheckingAccount class definition
using namespace std;


CheckingAccount::CheckingAccount(double a,double fee)
	:Account(a),transactionFee(0.0)
	{
		if(fee >= 0.0)
			transactionFee = fee;

		else
			throw invalid_argument("transation Fee must be positve or zero ");
	}
void CheckingAccount::credit(double amount)
{
	Account::credit(amount);
	chargeFee();
 } 
bool CheckingAccount::debit(double amount)
{
	bool success = Account::debit(amount);
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
	Account::setBalance(Account::getBalance()-transactionFee);
	cout<<"$"<<transactionFee<<"transaction fee charged."<<endl;
}
