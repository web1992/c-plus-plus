//
//  main.cpp
//  c-plus-plus
//
//  Created by web2992 on 2021/1/23.
//

#include <iostream>
#include <string>

int main(int argc, const char *argv[])
{
    // insert code here...
    std::cout << "Hello, World!" << std::endl;
    std::cout << "argc count =" << argc << std::endl;
    std::cout << "argv[0] =" << *argv[0] << std::endl;
    int a = 100;
    std::cout << a;
    std::cout << std::endl;
    std::string name;

    std::cout << "Enter your name:" << std::endl;
    std::cin >> name;
    std::cout << "Your name is :" << name << std::endl;

    return 0;
}
