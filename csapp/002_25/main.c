#include <stdio.h>

// 习题: 2.25
// Page: 58
float sum_elements(float arr[], unsigned len)
{
    int i;
    float result = 0;

  
    for (i = 0; i < len ; i++)
    {
        printf("arr=%f\n", arr[i]);
        result += arr[i];
    }

    return result;
}

int main()
{

    int const len = 3;
    float arr[len] = {1, 2, 3};

    float rs = sum_elements(arr, len);

    printf("result=%f", rs);
    return 0;
}
