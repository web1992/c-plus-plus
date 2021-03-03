#include <iostream>

int main()
{

    int *int_p = new int(18);
    double *d_p = new double(18.0);
    std::cout << "int_p=" << *int_p << std::endl;
    std::cout << "d_p=" << *d_p << std::endl;

    delete int_p;
    delete d_p;
    return 0;
}