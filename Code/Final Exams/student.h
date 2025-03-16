//Montgomery Yu Final Exam Computer Science II

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
		// ToDo: Declare friend functions
		friend ostream & operator << (ostream &out, const Student &obj);
	
	
	public:
		// ToDo: Declare constructors
		Student();
		Student(string firstName, string lastName, int idNum);
		
		
		// ToDo: Declare public member functions
		void addGrade (double grade);
		double average() const;

	private:
		// ToDo: Declare data members
		string m_strFirstName;
		string m_strLastName;
		int m_nldNumber;
		vector<double>m_vGrades;
		
		
};
#endif