#include <iostream>

void swap_none_pointer(int a, int b);
// 使用指针
void swap_none_pointer(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a=100;
    int b=200;
     std::cout << "a=" <<a << ",b=" << b << std::endl;

    swap_none_pointer(a,b);

    std::cout << "a=" <<a << ",b=" << b << std::endl;

    return 0;
}