
#include <iostream>

// create int by new
// use delete to free memory
int main()
{

    int *a = new int;
    int age = 18;
    *a = age;

    std::cout << "a = " << a << std::endl;
    std::cout << "*a = " << *a << std::endl;
    // std::cout << "*age = " << *age << std::endl; // news.cpp:15:31: error: indirection requires pointer operand ('int' invalid)
    std::cout << "age = " << age << std::endl;
    std::cout << "&age = " << &age << std::endl;
    delete a;

    return 0;
}