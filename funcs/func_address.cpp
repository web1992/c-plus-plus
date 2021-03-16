#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test()
{
    printf("123456\n");
}

int test2()
{
    int a = 1;
    int b = 1;
    printf("%d", a);
    printf("%d", b);

    return a;
}

int test3()
{
    int a = 1;
    int b = 1;
    int c = 1;
    printf("%d", a);
    printf("%d", b);
    printf("%d", c);

    return a;
}

// 打印 函数的地址
int main(int argc, char *argv[])
{
    printf("test 0x%x\n", test);
    printf("test 0x%x\n", &test);
    printf("test2 0x%x\n", test2);
    printf("test3 0x%x\n", test3);
    printf("main 0x%x\n", main);

}