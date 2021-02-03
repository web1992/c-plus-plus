//
//  structs.cpp
//  c-plus-plus
//
//  Created by web2992 on 2021/1/23.
//

#include <iostream>
#include <string>

struct people
{
    std::string name;
    int age;
};

int main(int argc, const char *argv[])
{

    struct people p = {
        "Lucy",
        18,
    };

    std::cout << "People name: " << p.name << std::endl;
    std::cout << "People age: " << p.age << std::endl;

    return 0;
}
