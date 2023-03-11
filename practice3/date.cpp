#include <iostream>

#include "date.h"

using namespace std;

    date::date(int m,int d,int y)
    :month(m),day(d),year(y){}
    void date::print()
    {
    	cout<<month<<"/"<<day<<"/"<<year<<endl;
    	
	}

