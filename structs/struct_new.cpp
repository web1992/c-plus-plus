#include <iostream>

struct people
{
    std::string name;
    int age;
};

int main()
{

    people *pp = new people;

    pp->name = "Lucy";
    pp->age = 18;

    std::cout << "name = " << pp->name << std::endl;
    std::cout << "age = " << pp->age << std::endl;
    
    return 0;
}