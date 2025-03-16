#include <iostream>
#include <string>
#include <stdlib.h>

#ifndef RATIONAL_H
#define RATIONAL_H

using namespace std;

class rational{
    public:
        // default constructor set the rational number to 0, (i.e., numerator is 0, denominator is 1) 
        rational(int numerator = 0, int denominator = 1);
        // Overloading the insertion operator
        friend istream& operator>>(istream& in, rational& r);
        // Overloading the extraction operator
        friend ostream& operator<<(ostream& out, const rational& r);
        // Set the numerator and denominator
        void set(int new_numerator, int new_denominator);
        //return the invoking object's numerator
        int get_numerator() const;
        //return the invoking object's denominator
        int get_denominator() const;
        // Set invoking object to be the sum of op1 and op2
        friend rational operator +(const rational& op1, const rational& op2);
        // Set the invoking object to the difference of op1 and op2.
        friend rational operator -(const rational& op1, const rational& op2);
        // Set the invoking object to the product of op1 and op2.
        friend rational operator *(const rational& op1, const rational& op2);
        // Set the invoking object to the Quotient of op1 and op2.
        friend rational operator /(const rational& op1, const rational& op2);
        // Overloading the == operator.
        friend bool operator ==(const rational& op1, const rational& op2);
        // Overloading the < operator.
        friend bool operator <(const rational& op1, const rational& op2);
        // Overloading the > operator.
        friend bool operator >(const rational& op1, const rational& op2);

    private:
        int numerator;
        int denominator;

        void simplify();
        static int gcd(int a, int b){
            while(a!=0 && b!=0){
                a = a % b;
                if(a!=0)
                    b = b % a;
            }
            if(a == 0)
                return b;
            if(b == 0)
                return a;
            return 1;
        }
};

#endif
