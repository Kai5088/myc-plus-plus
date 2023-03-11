// Member-function definitions of class Package.
#include <stdexcept>
#include "Package.h" // Package class definition
using namespace std;
Package::Package( const string &sname, const string &saddress, const string &scity, 
      const string &sstate, int szip, const string &rname, const string &raddress, const string &rcity, 
      const string &rstate, int rzip, double wei, double cost )
      {
			setSenderName(sname); // set sender's name
			setSenderAddress(saddress); // set sender's address
			setSenderCity(scity); // set sender's city
			setSenderState(sstate); // set sender's state
			setSenderZIP(szip); // set sender's ZIP code
			setRecipientName(rname); // set recipient's name
			setRecipientAddress(raddress); // set recipient's address
			setRecipientCity(rcity); // set recipient's city
			setRecipientState(rstate); // set recipient's state
			setRecipientZIP(rzip); // set recipient's ZIP code
			setWeight(wei); // validate and store weight
			setCostPerOunce(cost); // validate and store cost per ounce
   
	  }
	  
void Package::setSenderName( const string & n )
{
	senderName = n;
}
string Package::getSenderName() const
{
	return senderName;
}
void Package::setSenderAddress( const string &a )
{
	senderAddress = a;
}
string Package::getSenderAddress() const
{
	return senderAddress;
}
void Package::setSenderCity( const string &c )
{
	senderCity = c;
}
string Package::getSenderCity() const
{
	return senderCity;
}
void Package::setSenderState( const string &s )
{
	senderState = s;
}
string Package::getSenderState() const
{
	return senderState;
}
void Package::setSenderZIP( int z)
{
	senderZIP = z;
}
int Package::getSenderZIP() const
{
	return senderZIP;
}
void Package::setRecipientName( const string &r )
{
	recipientName = r;
}
string Package::getRecipientName() const
{
	return recipientName;
}
void Package::setRecipientAddress( const string &a )
{
	recipientAddress = a;
}
string Package::getRecipientAddress() const
{
	return recipientAddress;
}
void Package::setRecipientCity( const string &c )
{
	recipientCity = c;
}
string Package::getRecipientCity() const
{
	return recipientCity;
}
void Package::setRecipientState( const string &s )
{
	recipientState = s;
}
string Package::getRecipientState() const
{
	return recipientState;
}
void Package::setRecipientZIP( int z )
{
	recipientZIP = z;
}
int Package::getRecipientZIP() const
{
	return recipientZIP;
}
void Package::setWeight( double w )
{
	weight = w;
}
double Package::getWeight() const
{
	return weight;
}
void Package::setCostPerOunce( double c )
{
	costPerOunce = c;
}
double Package::getCostPerOunce() const
{
	return costPerOunce;
}
double Package::calculateCost() const
{
	return (getCostPerOunce()*getWeight());
}

