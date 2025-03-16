//Montgomery Yu Final Exam Computer Science II

#include "time.h"


// Todo: implement input operator
std::ostream& operator<<(ostream &o, const Time &t){
	if(t.hour<10)
	o<<"0";
	o<<t.hour<<":";
	if(t.minute<10)
	o<<"0";
	o<<t.minute<<":";
	if (t.second<10)
	o<<"0";
	o<<t.second;
	return o;
}
// HINT: keep it very simple.



// ToDo: implement output operator
// HINT: handle minute < 10. 
//       handle second < 10.
istream& operator>>(istream &in, Time &t){
	in>>t.hour;
	in.ignore(256, ':');
	in>>t.minute;
	in.ignore(256, ':');
	in>>t.second;
	return in;
}

int Time::getHour() const
{
	return hour;
}

int Time::getMinute() const
{
	return minute;
}

int Time::getSecond() const
{
	return second;
}

void Time::setHour(int hh)
{
	hour = hh;
}

void Time::setMinute(int mm)
{
	minute = mm;
}

void Time::setSecond(int ss)
{
	second = ss;
}
