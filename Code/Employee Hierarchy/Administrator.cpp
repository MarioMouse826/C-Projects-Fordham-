/* Implement Administrator class */
#include <iostream>
#include "Administrator.h"

using namespace std;

// ToDo: implement the default constructor, remember to call base class constructor
Administrator::Administrator(): SalariedEmployee(), bonus(0), salary(0), title("")
{
        // Silence is golden
}

// ToDo: implement the constructor, remember to call base class constructor
Administrator::Administrator(string name, string SSN, double salary, string title)

{
        // deliberately empty
        name = name;
        SSN = SSN;
        salary = salary;
        title = title;

        cout << "Adminstrator(" << name << "," << SSN << "," << salary << "," << title << ")\n";
}


// ToDo: implement accessor/mutators
        double Administrator::get_salary() const{
                return salary;
        }

        string Administrator::get_title() const{
                return title;
        }

        double Administrator::get_bonus() const{
                return bonus;
        }

        //Mutators
        void Administrator::set_salary(double new_salary){

                salary = new_salary;
        }

        void Administrator::set_title(string new_title){
                title = new_title;
        }

        void Administrator::set_bonus(double new_bonus){
                bonus = new_bonus;
        }
// ToDo: implement virtual functions

// ToDo: implement virtual get_net_pay function

// Hint: compensation is salary + bonus
double Administrator::get_net_pay() const {
        return SalariedEmployee::get_salary() + bonus;
}

// ToDo: implement the print_check() function. Follow the model in SalariedEmployee
// Hint: Use the base class print_check()
void Administrator::print_check() const
{
        SalariedEmployee::print_check();
        cout << "Administrator Title: " << title << "\nBonus: "<< bonus << "  Pay: " << get_net_pay() << endl;
		cout << "_________________________________________________\n";
}

// ToDo: implement the promptInput() function. Follow the model in SalariedEmployee
// Hint: Use the base class promptInput()
istream & Administrator::promptInput(istream & in, ostream & out)
{
        // ToDo: inplement the base class part, follow the model in SalariedEmployee
        SalariedEmployee::promptInput(in, out);

        // ToDo: read the bonus. Use ignorespace() to skip newline.
        out << "Enter bonus and title: ";
        in >> bonus;
        // ToDo: read the rest of the line for the title

        ignorespace(in);
        getline(in, title);

        return in;
}

                                 