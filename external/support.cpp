#include <iostream>

// g++ *.cpp && ./a.out
int main()
{
    extern double w;
    std::cout << "w=" << w << std::endl;
    //w=0.3
    return 0;
}