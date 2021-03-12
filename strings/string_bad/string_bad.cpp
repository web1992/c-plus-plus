#include <iostream>
#include "string_bad.h"

class StringBad
{
    StringBad &StringBad::operator=(StringBad &s)
    {
    }
};