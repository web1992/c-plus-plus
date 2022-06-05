#include <stdio.h>

int bis(int x, int m);
int bic(int x, int m);

int bool_or(int x, int y)
{
    return bis(x, y);
}

int bool_and(int x, int y)
{
    return bic(x, ~y);
}

int bool_xor(int x, int y)
{
    return bis(bic(x, y), bic(y, x));
}

int main()
{
    printf("main run");
}

// bic 代表 将掩码字M中, 每一个为 1 的位置, 其在数据字X上对应位置设置为 0.
int bic(int x, int m)
{
    // m =10101010
    return x & ~m;
}

// bis 代表将掩码字M中, 每一个为 1 的位置, 其在数据字X上对应位置设置为 1.
int bis(int x, int m)
{
    // m=10101010
    return x | m;
}