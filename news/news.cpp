
#include <iostream>

// create int by new 
// use delete to free memory
int main()
{

    int *a = new int;
    int age = 18;
    a = &age;

    std::cout << "a point is " << a << std::endl;
    std::cout << "age is " << age << std::endl;
    std::cout << "*a is " << *a << std::endl;

    delete a;

    return 0;
}