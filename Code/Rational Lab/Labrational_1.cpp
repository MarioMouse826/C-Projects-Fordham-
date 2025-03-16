#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;



class rational

{

public:

// default constructor set the rational number to 0, (i.e., numerator is 0, denominator is 1) 

rational();



// Set the invoking object's value from user input 

void input();



// Display invoking object's value in the standard output, in the form of numerator/denominator 

void output() const;



//return the invoking object's numerator

int get_numerator() const;



//return the invoking object's denominator

int get_denominator() const;



// Set invoking object to be the sum of op1 and op2

void Add(const rational& op1, const rational& op2);



// Set the invoking object to the difference of op1 and op2.

void Subtract(const rational& op1, const rational& op2);



// Set the invoking object to the product of op1 and op2.

void Multiply(const rational& op1, const rational& op2);



// Set the invoking object to the Quotient of op1 and op2.

void Divide(const rational& op1, const rational& op2);


private:

int numerator;

int denominator;

};



int main()

{

string binary_ops{"+-*/"};

rational op1, result;

char oper;



cout << "Enter op1 (in the format of p/q): ";

result.input();



//Test rational class member function

do {

cout << "\nEnter operator [+, -, /, *, =, c(lear), a(ccessors), q(uit)]: ";

cin >> oper;



// Only get operand if needed

if (binary_ops.find(oper) != string::npos) {

cout << "\nEnter op2 (in the format of p/q): ";

op1.input();

}



switch (oper) {

case '+':

result.Add(result, op1);

break;

case '-':

result.Subtract(result, op1);

break;

case '*':

result.Multiply(result, op1);

break;

case '/':

result.Divide(result, op1);

break;

case '=':

cout << "result = ";

result.output();

break;

case 'c':

result = rational();

cout << "\nEnter op1 (in the format of p/q): ";

result.input();

break;

case 'a':

cout << "\nresult's numerator is: " << result.get_numerator();

cout << "\nresult's denominator is: " << result.get_denominator();

break;

case 'q':

break;

default:

break;

}



} while (oper != 'q');

return 0;

}





//Definitions of all member functions



rational::rational()

{

numerator = 0;

denominator = 1;
                   }





// Set the invoking object's value from user input 

void rational::input()

{

char c;

int top, bottom;



// keep reading until valid input is entered

cin >> top >> c >> bottom;

if (denominator <= 0) {

cout << "Invalid rational value.";

exit(1);

}

// set the invoking object's numerator, denominator

numerator = top;

denominator = bottom;

}



// Display invoking object's value in the standard output, in the form of numerator and denominator 

void rational::output() const

{

cout << numerator << "/" << denominator;

}



//return the invoking object's numerator

int rational::get_numerator() const

{

return numerator;

}



//return the invoking object's denominator

int rational::get_denominator() const

                                            
{

return denominator;

}



// Set invoking object to be the sum of op1 and op2

void rational::Add(const rational& op1, const rational& op2)

{

numerator = (op1.numerator * op2.denominator + op2.numerator*op1.denominator);

denominator = op1.denominator*op2.denominator;

}



// Set invoking object to be the sum of op1 and op2

void rational::Subtract(const rational& op1, const rational& op2)

{

numerator = (op1.numerator * op2.denominator - op2.numerator*op1.denominator);

denominator = op1.denominator*op2.denominator;

}



// Set invoking object to be the sum of op1 and op2

void rational::Multiply(const rational& op1, const rational& op2)

{

numerator = (op1.numerator * op2.numerator);

denominator = op1.denominator*op2.denominator;

}



// Set invoking object to be the sum of op1 and op2

void rational::Divide(const rational& op1, const rational& op2)

{

numerator = (op1.numerator * op2.denominator);

denominator = op1.denominator*op2.numerator;

}

                          
