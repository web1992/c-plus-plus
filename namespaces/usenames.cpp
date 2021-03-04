#include <iostream>
#include "namesp.h"

// g++ **.cpp && ./a.out
int main()
{
    pers::Person p;
    pers::getPerson(p);
    pers::showPerson(p);

    std::cout << std::endl;

    using debts::Debt;

    Debt d;
    getDebt(d);
    showDebt(d);

    return 0;
}