#ifndef DATE_H
#define DATE_H

class date
{
	public:
		explicit date(int=1,int=1,int=2000);
		void print();
		
	private:
		unsigned int day;
		unsigned int month;
		unsigned int year;
};

#endif

