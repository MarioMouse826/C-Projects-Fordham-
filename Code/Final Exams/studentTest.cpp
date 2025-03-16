//Montgomery Yu Final Exam Computer Science II

#include <iostream>
using namespace std;

#include "student.h"

int main() 
{
  string first, last;
  int id=1000;
  double grade = 0;
  
  cout << "Enter name: ";
  cin >> first >> last;

  //ToDo: declare a Student using the parameer filled constructor
  Student s1(first,last,id);
  
  
  cout << "Enter the grades for this student (-1 when done): ";

  while (grade >= 0) {
    if(grade = -1)
    break;

  // ToDo: read the grade and if not less than 0, 
  //       add it to grades using your add member function.
  s1.addGrade(grade);
  cin >> grade;

  }
  //cout << student << endl;
  cout<<s1;
}