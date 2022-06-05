#include <iostream>

/**
 * https://www.tutorialspoint.com/size-t-data-type-in-c
 * @brief  sizeof 测试
 *
 */
struct S
{
    int a;  // 4
    char b; // 1+3,此处会进行3字节对齐
    int c;  // 4
};

struct test
{
    char a; // 1
    char b; // 1
};

struct test2
{
    char a; // 1+3
    int aa; // 4
    char b; // 1+3
    int cc; // 4
};

// 字节对齐的测试
int main()
{

    int a;   // 4
    char ch; // 1
    std::cout << "sizeof a=" << sizeof(a) << std::endl;
    std::cout << "sizeof ch=" << sizeof(ch) << std::endl;

    // sizeof S=12
    std::cout << "sizeof S=" << sizeof(S) << std::endl;
    // sizeof test=2
    std::cout << "sizeof test=" << sizeof(test) << std::endl;
    // sizeof test2=16
    std::cout << "sizeof test2=" << sizeof(test2) << std::endl;

    size_t aa = 1;
    std::cout << "sizeof size_t=" << sizeof(aa) << std::endl;

    int32_t bb = 123;
    std::cout << "sizeof int32_t=" << sizeof(bb) << std::endl;

    return 0;
}