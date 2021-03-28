#include <iostream>

int main()
{

    struct Data
    {
        double data[200];
    };
    struct Junk
    {
        int junk[100];
    };

    Data d = {1.0, 1.2, 1.3};

    // C 语言中，下面的转换都是可以的，但是没有任何意义
    char *pch = (char *)(&d); // case to char *
    char ch = char(&d);       // case to char
    Junk *pj = (Junk *)(&d);  //case to Junk *

    return 0;
}