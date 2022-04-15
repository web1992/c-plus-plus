#include <iostream>
#include "person.h"

// g++ *.cpp&& ./a.out
int main()
{
    Person p;
    p.newPerson(p);
    p.show(p);
    return 0;
}