#include <iostream>

int getNum(const char[], const char);

void printNum(int (*fp)(const char[], const char));

// 函数指针
int main()
{

    printNum(getNum);

    return 0;
}

void printNum(int (*fp)(const char[], const char ch))
{
    char chs[] = "AABBCCDDEEFF";
    char ch = 'A';

    int count = (*fp)(chs, ch);

    std::cout << "printNum count=" << count << std::endl;
}

int getNum(const char *chs, const char ch)
{
    int count = 0;
    while (*chs)
    {
        if (ch == *chs)
        {
            count++;
        }
        chs++;
    }

    return count;
}