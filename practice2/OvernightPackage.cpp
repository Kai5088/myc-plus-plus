// Exercise 11.9 Solution: OvernightPackage.cpp
// Member-function definitions of class OvernightPackage.
#include <stdexcept>
#include "OvernightPackage.h" // OvernightPackage class definition
using namespace std;

OvernightPackage::OvernightPackage( const string &sname, const string &saddress, const string &scity, 
      const string &sstate, int szip, const string &rname, const string &raddress, const string &rcity, 
      const string &rstate, int rzip, double wei, double cost, double overnight )
	  :Package( sname, saddress,scity, 
      sstate, szip, rname, raddress,rcity, 
      rstate, rzip,wei,cost),overnightFeePerOunce(0)
      {
      		setOvernightFeePerOunce(overnight);
	  }
void OvernightPackage::setOvernightFeePerOunce( double overnight)
{
	if(overnight < 0)
      		{
      			throw invalid_argument("overnightFeePerOunce must larger than 0");	
			}
			else
			overnightFeePerOunce = overnight;
}

double OvernightPackage::getOvernightFeePerOunce() const
{
	return overnightFeePerOunce; 
}
double OvernightPackage::calculateCost() const
{
	return(Package::getWeight()*(Package::getCostPerOunce()+getOvernightFeePerOunce()));
}

