#ifndef TIME_H
#define TIME_H

class time 
{
	public:
		time(int=0,int=0,int=0);
		
		void settime(int,int,int);
		void sethour(int);
		void setminute(int);
		void setsecond(int);
		unsigned int gethour()const;
		unsigned int getminute()const;
		unsigned int getsecond()const;
		
		void utime()const;
		void stime()const;
	private:
		unsigned int hour;
		unsigned int minute;
		unsigned int second;
};

#endif
