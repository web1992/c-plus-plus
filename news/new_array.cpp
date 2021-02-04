#include <iostream>

// create array by new keyword
// use delete to free memory
int main()
{

    int *p_numbers = new int[3];
    p_numbers[0] = 1;
    p_numbers[1] = 2;
    p_numbers[2] = 3;

    std::cout << "p_numbers address is " << p_numbers << std::endl;
    std::cout << "p_numbers[0] is " << p_numbers[0] << std::endl;

    p_numbers = p_numbers + 1;
    std::cout << "after +1,p_numbers  address is " << p_numbers << std::endl;
    std::cout << "p_numbers[0] is " << p_numbers[0] << std::endl;

    p_numbers = p_numbers - 1;

    delete[] p_numbers;

    return 0;
}