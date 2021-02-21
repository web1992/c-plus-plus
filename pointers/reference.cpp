#include <iostream>

void swap_by_ref(int &a, int &b);
void swap_by_pointer(int *a, int *b);

int main()
{

    int num = 1;
    int &num_ref = num; // 声明引用变量

    std::cout << "num=" << num << std::endl;
    std::cout << "num_ref=" << num_ref << std::endl;

    num_ref++;
    // after change value
    std::cout << "num=" << num << std::endl;
    std::cout << "num_ref=" << num_ref << std::endl;

    num++;
    std::cout << "num=" << num << std::endl;
    std::cout << "num_ref=" << num_ref << std::endl;

    // print address
    std::cout << "num address=" << &num << std::endl;
    std::cout << "num_ref address=" << &num_ref << std::endl;

    int *num_p = &num; // 指针
    std::cout << "*num_p=" << num_p << std::endl;

    int a = 1;
    int b = 2;
    swap_by_ref(a, b);
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;

    int c = 11;
    int d = 22;
    swap_by_pointer(&c, &d);
    std::cout << "c=" << c << std::endl;
    std::cout << "d=" << d << std::endl;

    return 0;
}

// 使用引用变量交换值
void swap_by_ref(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

// 使用指针
void swap_by_pointer(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}