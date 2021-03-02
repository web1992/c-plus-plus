#include <iostream>

int a = 1;// 外部链接
static int b = 2;// 内部链接

int main()
{
    static int c = 3;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    std::cout << "c=" << c << std::endl;
    return 0;
}