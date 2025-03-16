//Montgomery Yu Final Exam Computer Science II

#include <iostream>
#include "student.h"


// ToDo: Implement the default constructor that sets idnum to 9999.
Student::Student()
{
    m_nldNumber = 9999;
}


// ToDo: Implement the parameterized constructor
// @param string first
// @param string last
// @param int idnum

Student::Student(string firstName, string lastName, int idNum)
{
    m_strFirstName = firstName;
    m_strLastName = lastName;
    m_nldNumber = idNum;
}

// ToDo: Implement add_grade mmember function
// @param double grade

void Student::addGrade (double grade)
{
    m_vGrades.push_back(grade);
}




// ToDo: Implement average member function 
// @returns double average of all grades

double Student::average() const
{
    int count = m_vGrades.size();
    if(count==0)
    return 0.0;
    vector<double>::const_iterator iter;
    double sum = 0;
    for(iter=m_vGrades.begin();iter!m_vGrades.end();++iter)
    {
        sum+=*iter;
    }
    return sum/count;
}


// ToDo: implement the operaor << function to print:
// lastname, firstname(idnum) average: avg

ostream & operator <<(ostream &out, const Student &obj)
{
    out << obj.average()<<endl;
    return out;
}

