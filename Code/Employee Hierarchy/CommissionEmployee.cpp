#include "CommissionEmployee.h"


// ToDo: implement the default constructor, remember to call base class constructor
CommissionEmployee::CommissionEmployee(): Employee(), sales(0), commission(0)
{
        // Silence is golden
}

// ToDo: implement the constructor, remember to call base class constructor
CommissionEmployee::CommissionEmployee(string name, string SSN, double sales, double commission)
{
        // deliberately empty
        name = name;
        SSN =  SSN;
        sales = sales;
        commission = commission;
        cout << "CommissionEmployee(" << name << "," << SSN << "," << sales << "," << commission << ")\n";
}

// ToDo: implement accessor/mutators
double CommissionEmployee::get_sales() const {
        return sales;
}

double CommissionEmployee::get_commission() const{
        return commission;
}

void CommissionEmployee::set_sales(double new_sales){
        sales = new_sales;
}

void CommissionEmployee::set_commission(double new_commission){
        commission = new_commission;
}

// ToDo: implement virtual get_net_pay function
// Hint: compensation is commission/100 * sales
double CommissionEmployee::get_net_pay() const{
        return (commission/100) * sales;
}


// ToDo: implement the virtual print_check() function. Follow the model in SalariedEmployee
// Hint: Use the base class print_check()
void CommissionEmployee::print_check() const
{
        Employee::print_check();
        cout << "Commission Employee. \nGross sales: " << sales
         << " Commission: " << commission << " Pay: " << get_net_pay( ) << endl;
    cout << "_________________________________________________\n";
}

// ToDo: implement the virtual promptInput() function. Follow the model in SalariedEmployee
// Hint: Use the base class promptInput()
istream& CommissionEmployee::promptInput(istream& in, ostream& out)
{
        // ToDo: inplement the base class part, follow the model in SalariedEmployee
        Employee::promptInput(in, out);

        // ToDo: read the sales and commission.
        out << "Enter sales and commission: ";
        in >> sales >> commission;
        return in;

}




