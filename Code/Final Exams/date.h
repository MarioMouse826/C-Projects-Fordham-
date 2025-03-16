//Montgomery Yu Final Exam Computer Science II

// Holds a month and a day to represent a date.
#ifndef DATE_H
#define DATE_H

#include <iostream>
#include<string>
using namespace std;

class Date
{
public:
    friend bool equal(const Date& date1, const Date& date2);
    //Precondition: date1 and date2 have values.
    //Returns true if date1 and date2 represent the same date;
    //otherwise, returns false.
    Date();
    Date(int m, int d);
	void setMonth(int m);
	void setDay(int d);
    double getMonth() const;
    double getDay() const;
    void inputDate(istream& ins);
    void outputDate(ostream& outs) const;
	friend istream& operator >>(istream& ins, Date& d);
	// Input Operator >>
	// calls the inputDate function within here to perform input.
	friend ostream& operator <<(ostream& outs, const Date& d);
	// Output Operator <<
	// Calls the outputDate function within here to perform output.

private:
	int month;
	int day;
};

#endif