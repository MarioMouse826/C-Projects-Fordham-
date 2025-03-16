#include <iostream>
#include <string>
#include <stdlib.h>
#include "rational.h"

//Definitions of all member functions
rational::rational(int n, int d){
    numerator = n;
    denominator = d;
}

//return the invoking object's numerator
int rational::get_numerator() const{
    return numerator;
}

//return the invoking object's denominator
int rational::get_denominator() const{
    return denominator;
}

// Set invoking object to be the sum of op1 and op2
rational operator + (const rational& op1, const rational& op2){
    rational temp;
    temp.numerator = (op1.numerator * op2.denominator + op2.numerator*op1.denominator);
    temp.denominator = op1.denominator*op2.denominator;
    temp.simplify();
    return temp;
}

// Set invoking object to be the sum of op1 and op2
rational operator - (const rational& op1, const rational& op2){
    rational temp;
    temp.numerator = (op1.numerator * op2.denominator - op2.numerator*op1.denominator);
    temp.denominator = op1.denominator*op2.denominator;
    temp.simplify();
    return temp;
}

// Set invoking object to be the sum of op1 and op2
rational operator * (const rational& op1, const rational& op2){
    rational temp;
    temp.numerator = (op1.numerator * op2.numerator);
    temp.denominator = op1.denominator*op2.denominator;
    temp.simplify();
    return temp;
}

// Set invoking object to be the sum of op1 and op2
rational operator / (const rational& op1, const rational& op2){
    rational temp;
    temp.numerator = (op1.numerator * op2.denominator);
    temp.denominator = op1.denominator*op2.numerator;
    temp.simplify();
    return temp;
}

bool operator == (const rational& op1, const rational& op2){
    int cross_product_1 = op1.numerator * op2.denominator, cross_product_2 = op1.denominator * op2.numerator;
    return cross_product_1 == cross_product_2;
}

bool operator < (const rational& op1, const rational& op2){
    int cross_product_1 = op1.numerator * op2.denominator, cross_product_2 = op1.denominator * op2.numerator;
    return cross_product_1 < cross_product_2;
}

bool operator > (const rational& op1, const rational& op2){
    int cross_product_1 = op1.numerator * op2.denominator, cross_product_2 = op1.denominator * op2.numerator;
    return cross_product_1 > cross_product_2;
}

void rational::simplify(){
    int gcd = rational::gcd(numerator, denominator);
    numerator = numerator / gcd;
    denominator = denominator / gcd;
}

istream& operator>>(istream& in, rational& r){
    char c;
    int top, bottom;
    in >> top >> c >> bottom;
    if (bottom <= 0) {
        cout << "Invalid rational format!";
        exit(1);
    }
    r.numerator = top;
    r.denominator = bottom;
    return in;
}

ostream& operator<<(ostream& out, const rational& r){
    out << r.numerator << "/" << r.denominator;
    return out;
}