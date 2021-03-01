#include <iostream>
#include <string>

template <class T>
void swap(T *a, T *b);

template <class T>
void error(T a);

template <class T>
void error(T a, int num);

int main()
{

    int a = 1;
    int b = 2;
    swap(&a, &b);
    std::cout << "a=" << a << " b=" << b << std::endl;

    double d1 = 2.3;
    double d2 = 5.6;
    swap(&d1, &d2);
    std::cout << "d1=" << d1 << " d2=" << d2 << std::endl;

    std::string err = "I am error";
    error(err);
    error(err, 666);

    return 0;
}

template <class T>
void swap(T *a, T *b)
{
    T t;
    t = *a,
    *a = *b;
    *b = t;
}

// 模板重载
template <class T>
void error(T a)
{
    std::cout << "error:" << a << std::endl;
}

template <class T>
void error(T a, int num)
{
    std::cout << "error:" << a << " num:" << num << std::endl;
}