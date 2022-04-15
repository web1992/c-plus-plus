#include <iostream>

struct S
{
    int a;// 8
    char b;
    int c;
};

int main()
{

    // sizeof S=12
    std::cout << "sizeof S=" << sizeof(S) << std::endl;

    return 0;
}