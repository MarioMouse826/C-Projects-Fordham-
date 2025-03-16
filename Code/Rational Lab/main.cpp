#include <iostream>
#include <string>
#include <stdlib.h>
#include "rational.h"

using namespace std;

int main(){
    string binary_ops{"+-*/?<>"};
    rational op1, result;
    char oper;

    cout << "Enter op1 (in the format of p/q): ";
    cin>>result;

    //Test rational class member function
    do {
        cout << "\nEnter operator [+, -, /, *, =, ?(==), <(less), >(greater), c(lear), a(ccessors), q(uit)]: ";
        cin >> oper;

        // Only get operand if needed
        if (binary_ops.find(oper) != string::npos) {
            cout << "\nEnter op2 (in the format of p/q): ";
            cin>>op1;
        }

    switch (oper) {
        case '+': 
            result = result + op1;
            break;
        case '-':
            result = result - op1;
            break;
        case '*':
            result = result * op1;
            break;
        case '/':
            result = result / op1;
            break;
        case '=':
            cout << "result = ";
            cout<<result;
            break;
        case '?':
            cout << ((result == op1) ? "Correct! Good Job!": "Oh no! Good try!") << endl;
            break;
        case '>':
            cout << ((result > op1) ? "True, great!": "False, try again!") << endl;
            break;
        case '<':
            cout << ((result < op1) ? "True, great!": "False, try again!") << endl;
            break;
        case 'c':
            result = rational();
            cout << "\nEnter op1 (in the format of p/q): ";
            cin>>result;
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
        if(cin.fail()){
            cin.clear(); cin.ignore();
        }
    } while (oper != 'q');
    return 0;
}