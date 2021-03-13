#include <iostream>
#include "string_bad.h"

class StringBad
{
    char *str;
    int len;
    StringBad &StringBad::operator=(StringBad &s)
    {
        if (this == &s)
        {
            return s;
        }
        delete[] str;
        len = s.len;
        char *st = new char[len + 1];
        std::strcpy(str, s.str);
        return *this;
    }
};