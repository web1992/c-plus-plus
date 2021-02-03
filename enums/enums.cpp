//
//  structs.cpp
//  c-plus-plus
//
//  Created by web2992 on 2021/1/23.
//

#include <iostream>
#include <string>

enum Switch
{
    on,
    off
};

int main(int argc, const char *argv[])
{

    enum Switch _on = on;
    enum Switch _off = off;

    std::cout << "on is " << _on << std::endl;
    std::cout << "off is " << _off << std::endl;
}
