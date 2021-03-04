#include <iostream>
#include "namesp.h"

namespace pers
{

    using std::cin;
    using std::cout;
    void getPerson(Person &p)
    {
        cout << "Enter first name:";
        cin >> p.fname;
        cout << "Enter last name:";
        cin >> p.lname;
    }

    void showPerson(const Person &p)
    {
        std::cout << p.lname << "," << p.fname;
    }
}

namespace debts
{
    void getDebt(Debt &d)
    {
        getPerson(d.name);
        std::cout << "Enter Debt:";
        std::cin >> d.amount;
    }
    void showDebt(const Debt &d)
    {
        showPerson(d.name);
        std::cout << ": $" << d.amount << std::endl;
    }
    double sumDebts(const Debt ar[], int len)
    {
        double t = 0;

        for (int i = 0; i < len; i++)
        {
            t += ar[i].amount;
        }
        return t;
    }

}
