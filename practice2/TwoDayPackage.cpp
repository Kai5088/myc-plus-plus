// Member-function definitions of class TwoDayPackage.
#include <stdexcept>
#include "TwoDayPackage.h" // TwoDayPackage class definition
TwoDayPackage::TwoDayPackage( const string &sname, const string &saddress, const string &scity, 
      const string &sstate, int szip, const string &rname, const string &raddress, const string &rcity, 
      const string &rstate, int rzip, double wei, double cost, double two)
	  :Package( sname, saddress,scity, 
      sstate, szip, rname, raddress,rcity, 
      rstate, rzip,wei,cost),flatFee(0)
      {
      		setFlatFee(two);
	  }
void TwoDayPackage::setFlatFee( double two)
{
	if(two<0)
	{
		throw invalid_argument("flat fee must be postive");
	}		
	else
	flatFee = two;
	
} 
double TwoDayPackage::getFlatFee() const
{
	return flatFee;
}

double TwoDayPackage::calculateCost() const
{
	return (getFlatFee()+Package::calculateCost());
}
