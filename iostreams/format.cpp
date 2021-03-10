#include <iostream>
int main()
{
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    double num = 123.4567;
    std::cout << "num=" << num << std::endl;

    std::streamsize pre = std::cout.precision(3); // 3位小数
    std::cout << "num=" << num << std::endl;

    // 恢复
    std::cout.precision(pre);
    std::cout << "num=" << num << std::endl;
    return 0;
}