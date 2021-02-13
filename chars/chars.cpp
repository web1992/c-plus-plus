#include <iostream>
#include <cstring>

int main()
{

    char names[] = {'1', '2','\0','\0'};
    char title[] = "Java\0";

    std::cout << "names is " << names << std::endl;
    std::cout << "title is " << title << std::endl;

    std::cout << "names sizeof " << sizeof names << std::endl;
    std::cout << "title sizeof " << sizeof title << std::endl;

    std::cout << "names len is " << strlen(names) << std::endl;
    std::cout << "title len is " << strlen(title) << std::endl;
    return 0;
}