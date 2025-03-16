//Montgomery Yu Final Exam Computer Science II

#include <iostream>
using namespace std;
#include "dateOfYear.h"

// Implement the member functions!
int main()
{
 int number;

 do
 {
  cout << "Enter a date (-1 to exit) ";
  cin >> number;

  DayOfYear test(number);

  if (number >= 0 && number <= 365)
  {
   test.print();
  }

  cout << endl;
 } while (number != -1);


 return 0;
}