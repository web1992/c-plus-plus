
#include <iostream>

using namespace std;

int main()
{

    int number = 1;
    int age = 18;

    int *p_int = &number;
    int *p_age = &age;

    cout << "number is " << number << endl;
    cout << "number address is " << p_int << endl;

    cout << "age is " << age << endl;
    cout << "age address is " << p_age << endl;

    return 0;
}