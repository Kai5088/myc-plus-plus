// Member-function definitions for class SavingsAccount.
#include <stdexcept>
#include "SavingsAccount.h" // SavingsAccount class definition
using namespace std;

SavingsAccount::SavingsAccount(double initialbalance, double rate)
	:Account(initialbalance),interestRate(0.0)
{
	if(rate <= 1.0 && rate >= 0.0)
		interestRate = rate;
	else
		throw invalid_argument("interestRate should >= 0!!!!");		
}
double SavingsAccount::calculateInterest() const
{
	return (Account::getBalance()*interestRate);
}

