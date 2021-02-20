#include <iostream>

void countdown(int n);
// 递归
int main()
{

    countdown(4);
    return 0;
}

void countdown(int n)
{

    std::cout << "countdown begin n=" << n << std::endl;
    if (n > 0)
    {
        countdown(n - 1);
    }
    std::cout << "countdown end n=" << n << std::endl;
}