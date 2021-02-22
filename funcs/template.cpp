#include <iostream>

template <class T>
void swap(T *a, T *b);

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