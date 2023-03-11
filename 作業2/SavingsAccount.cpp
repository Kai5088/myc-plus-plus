// Member-function definitions for class SavingsAccount.
#include <stdexcept>
#include "SavingsAccount.h" // SavingsAccount class definition
using namespace std;

SavingsAccount::SavingsAccount( double origin, double rate)
	:Account(origin), interestRate(0.0)
{
	if(1<=rate&&rate>=0.0)
		interestRate=rate;
	else
		throw invalid_argument("interestRate must >= 0.0 ");	
}

double SavingsAccount::calculateInterest()
{
	return getBalance()*interestRate;
}
