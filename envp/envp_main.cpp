#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char **envp)
{
    int n;

    printf("%d\n", argc);
    for (n = 0; argv[n]; n++)
    {
        printf("argv[%d] : %p\n", n, &argv[n]);
        printf("%p : %s\n", argv[n], argv[n]);
    }

    for (n = 0; envp[n]; n++)
    {
        printf("envp[%d] : %p\n", n, &envp[n]);
        printf("%p : %s\n", envp[n], envp[n]);
    }
    return 0;
}