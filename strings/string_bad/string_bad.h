#include <iostream>

#ifndef CLASS_BAD_
#define CLASS_BAD_

class StringBad
{
    StringBad &StringBad::operator=(StringBad &s);
};

#endif