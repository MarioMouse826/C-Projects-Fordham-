//Montgomery Yu Final Exam Computer Science II

#include "date.h"
#include <iostream>
#include<string>
using namespace std;

// Include Guards:x

class DateOfYear
{
public:
	// Create Constructors Here
	DayOfYear(int);
	DayOfYear(string, int);
	void print();



	// Mutators and Accessor Functions Here

	// inputDate and outputDate here, taking into account the new 

private:
	// Declare new data members here
	int day;
	static string months[];
	static int monthInt[];
	static int days[];
};

string DayOfYear::months[] = { "January", "February", "March", "April", "May", "June", "July", "August", 
        "September","October", "November", "December" };
int DayOfYear::monthInt[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
int DayOfYear::days[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
       11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
       21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 };

DayOfYear::DayOfYear(int date)
{
 if (date < 0 || date > 365)
 {
  cout << "Enter valid input" << endl;
 }
 else
 {
  day = date;
 }
}
DayOfYear::DayOfYear(string monthName, int date);
{

 day = date;
}

void DayOfYear::print()
{
 if (day >= 1 && day <= 31)
 {
  cout << "Day " << day << " would be " << months[0] << " " << day << endl; // Jan
 }
 else if (day >= 32 && day <= 60)
 {
  cout << "Day " << day << " would be " << months[1] << " " << day - 31 << endl; // Feb
 }
 else if (day >= 61 && day <= 82)
 {
  cout << "Day " << day << " would be " << months[2] << " " << day - 60 << endl; // Mar
 }
 else if (day >= 83 && day <= 113)
 {
  cout << "Day " << day << " would be " << months[3] << " " << day - 82 << endl; // Apr
 }
 else if (day >= 114 && day <= 145)
 {
  cout << "Day " << day << " would be " << months[4] << " " << day - 113 << endl; // May
 }
 else if (day >= 146 && day <= 176)
 {
  cout << "Day " << day << " would be " << months[5] << " " << day - 145 << endl; // Jun
 }
 else if (day >= 177 && day <= 208)
 {
  cout << "Day " << day << " would be " << months[6] << " " << day - 176 << endl; // Jul
 }
 else if (day >= 209 && day <= 240)
 {
  cout << "Day " << day << " would be " << months[7] << " " << day - 208 << endl; // Aug
 }
 else if (day >= 241 && day <= 271)
 {
  cout << "Day " << day << " would be " << months[8] << " " << day - 240 << endl; // Sept
 }
 else if (day >= 271 && day <= 302)
 {
  cout << "Day " << day << " would be " << months[9] << " " << day - 270 << endl; // Oct
 }
 else if (day >= 303 && day <= 333)
 {
  cout << "Day " << day << " would be " << months[10] << " " << day - 302 << endl; // Nov
 }
 else if (day >= 334 && day <= 365)
 {
  cout << "Day " << day << " would be " << months[11] << " " << (day == 365? day - 334 : day - 333) << endl; // Dec
 }
}


