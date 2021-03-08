#include <iostream>
#include "person.h"

void Person::show(const Person &p)
{
    std::cout << "Your name:" << p.fname << " " << p.lname << std::endl;
}

void Person::newPerson(Person &p)
{
    std::cout << "Enter your fname:" << std::endl;
    std::cin >> Person::fname;
    std::cout << "Enter your lname:" << std::endl;
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

Person::Person()
{
    std::cout << "default run" << std::endl;
}
Person::Person(std::string _fname, std::string _lname)
{
    Person::fname = _fname;
    Person::lname = _lname;
}
Person::~Person()
{
    std::cout << "destory run" << std::endl;
}