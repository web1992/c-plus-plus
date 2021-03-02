#include <iostream>

int a = 1;
static int b = 2;

int main()
{
    static int c = 3;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    std::cout << "c=" << c << std::endl;
    return 0;
}