#include <iostream>

struct people
{
    std::string name;
    int age;
};

// *pp 是指针，需要使用 箭头成员运算符
// -> 箭头成员运算符
int main()
{

    people *pp = new people;

    pp->name = "Lucy";
    pp->age = 18;

    std::cout << "name = " << pp->name << std::endl;
    std::cout << "age = " << pp->age << std::endl;

    std::cout << "(*pp).name = " << (*pp).name << std::endl;
    std::cout << "(*pp).age = " << (*pp).age << std::endl;
    return 0;
}