
//Implementation of the class CheckingAccount.
#include <iostream>
#include <cmath>
#include "CheckingAccount.h"
using namespace std;

// To Do: include necessary header files



// To Do: Please write comments and code to implement CheckingAccount here
//the function takes 3 data , dollars, cents and fee 
CheckingAccount::CheckingAccount (int dollars, int cents, double fee): BankAccount(dollars, cents), check_fee(fee) {
    if (fee < 0){
        cout << " Illegal values for check fee. \n";
        exit(1); 
    }
}


//the function takes 2 data , dollars, cents 
CheckingAccount:: CheckingAccount (int dollars, double fee): BankAccount(dollars), check_fee(fee) {
    if (fee < 0){
        cout << "Illegal values for check fee.\n";
        exit(1);
    } 
}

//default constructor 
CheckingAccount::CheckingAccount (): BankAccount(), check_fee(0.0)
{
    
}

//return function for check fee
double CheckingAccount::getCheck_fee() {
    return check_fee;
}

//output function
void CheckingAccount::output(ostream& outs) {
    BankAccount::output(outs);
    outs << "Check fee: $" << getCheck_fee() << endl;
}

//input function
void CheckingAccount::input(istream& ins) {
    BankAccount::input(ins);
    ins >> check_fee;
}
//function that checks the value and add to the balance
void CheckingAccount::check(int dollars, int cents, double check_fee, double balance) {
    double amount = dollars + .01*cents + check_fee;
    if (dollars >= 0 && cents >= 0 && amount <= get_balance())
    {
        balance -= amount;
        set_balance(balance);
    }
    else {
        cout << "Illegal values for money must be greater than or equal 0 ";
        cout << "and less than or equal to the balance.\n";
    }
}