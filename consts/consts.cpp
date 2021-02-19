#include <iostream>

int main()
{
    int a = 12306;
    int b = 1;

    const int *pi = &a;
    int *const ap = &a;

    std::cout << "pi=" << pi << std::endl; // a pointer to const int 指针指向值不能修改
    std::cout << "ap=" << ap << std::endl; // a const pointer to int 指针地址不能修改

    // *pi = 1; // invalid
    // pi = &b; // ok
    // ap = &b; // invalid
    // *ap = 1; // ok

    std::cout << "pi=" << *pi << std::endl;
    std::cout << "ap=" << *ap << std::endl;
    return 0;
}