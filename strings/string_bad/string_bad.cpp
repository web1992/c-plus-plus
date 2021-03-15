#include <iostream>
#include "string_bad.h"

class StringBad
{
    char *str;
    int len;
    static int num_strings;

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