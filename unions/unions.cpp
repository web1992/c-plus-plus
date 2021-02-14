#include <iostream>

// union 共用体
union one4all
{
    int int_val;
    long long_val;
    double double_val;
};

int main()
{
    one4all all;
    all.int_val = 1;
    std::cout << all.int_val << "\n";

    all.long_val = 2;
    std::cout << all.int_val << "\n";

    all.double_val = 3.1;
    //std::cout << all.int_val << "\n";
    std::cout << all.double_val << "\n";

    return 0;
}