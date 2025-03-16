//#pragma once
#include <iostream>
#include <string>
#include "Employee.h"

#ifndef _COMMISSION_H
#define _COMMISSION_H

class CommissionEmployee : public Employee
{
public:
        // ToDo: declare default constructor for CommissionEmployee
        CommissionEmployee();

        // ToDo: declare constructor for CommissionEmployee that takes a name, SSN, sales, commission percent
        CommissionEmployee(string the_name, string the_ssn, double sales, double commission);

        // ToDo: declare Accessor/Mutator functions

        // Accessors
        double get_sales() const;
        double get_commission() const;

        // Mutators 
        void set_sales(double sales);
        void set_commission(double commission);

        // ToDo: declare vitual functions to override
        void print_check() const;
        istream& promptInput(istream& in, ostream& out);
        double get_net_pay() const;

private:
        // ToDo: declare a sales, commission percent member
        double sales;
        float commission;

};
#endif // _COMMISSION_H                  