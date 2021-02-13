#include <iostream>

// g++ cgetlin.cpp && ./a.out
int main()
{
    // get line
    char name[20];
    std::cin.getline(name, 20);
    std::cout << "Your name is: " << name << std::endl;
    return 0;
}