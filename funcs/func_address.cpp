#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test()
{
    printf("123456\n");
}

// 打印 函数的地址
int main(int argc, char *argv[])
{
    printf("0x%x\n", test);
    printf("0x%x\n", &test);
}