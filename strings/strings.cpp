#include <cstring>
#include <iostream>

int main()
{

    const size_t size=20;
    char char1[size] = {"ABC"};
    char char2[size] = {"DEF"};

    char char3[size] = "";

    std::cout << "char1=" << char1 << "\n";
    std::cout << "char2=" << char2 << "\n";
    std::cout << "char3=" << char3 << "\n";

    // after cat
    strcat(char3, char1);
    std::cout << "char3 " << char3 << "\n";

    // after copy
    strcpy(char1, char2);
    std::cout << "char1 " << char1 << "\n";
    std::cout << "char2 " << char2 << "\n";

    return 0;
}