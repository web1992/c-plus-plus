#include <iostream>

namespace pers
{
    struct Person
    {
        std::string fname;
        std::string lname;
    };
    void getPerson(Person &);
    void showPerson(const Person &);

    void getPerson(Person &p)
    {
        std::cout << "getPerson=" << p.fname << std::endl;
    }

    void showPerson(const Person &p)
    {
        std::cout << "showPerson=" << p.lname << std::endl;
    }
}

int main()
{
    const pers::Person p = {"Cruise", "Tom"};

    std::cout << "fname=" << p.fname << std::endl;
    std::cout << "lname=" << p.lname << std::endl;

    pers::showPerson(p);

    pers::Person p2 = {"Raymong"};
    pers::getPerson(p2);
    
    return 0;
}