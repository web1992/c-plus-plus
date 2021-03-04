#include <iostream>
#include "person.h"

void Person::show(const Person &p)
{
    std::cout << "Your name:" << p.fname << " " << p.lname << std::endl;
}

void Person::newPerson(Person &p)
{
    std::cout << "fname:" << std::endl;
    std::cin >> Person::fname;
    std::cout << "lname:" << std::endl;
    std::cin >> Person::lname;
}

void Person::setFname(std::string fname)
{
    Person::fname = fname;
}
void Person::setLname(std::string lname)
{
    Person::lname = lname;
}