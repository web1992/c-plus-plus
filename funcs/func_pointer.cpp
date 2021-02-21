#include <iostream>

int getNum(const char[], char ch);

// 函数指针
int main()
{
    char chs[] = "AABBCCDDEEFF";
    int count = getNum(chs, 'A');

    std::cout << "count=" << count << std::endl;

    return 0;
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