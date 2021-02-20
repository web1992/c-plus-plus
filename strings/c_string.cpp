#include <iostream>

int c_in_str(const char *str, char ch);
// C 格式的字符串和 char 数组
int main()
{
    const char ha[] = "haha";  // char 数组
    const char *he = "hehehe"; // 字符串

    int c1 = c_in_str(ha, 'h');
    int c2 = c_in_str(he, 'h');

    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;

    return 0;
}

int c_in_str(const char *str, char ch)
{
    int count = 0;

    while (*str)
    {
        if (ch == *str)
        {
            count++;
        }
        str++;
    }

    return count;
}