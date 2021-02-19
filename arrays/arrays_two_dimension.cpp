#include <iostream>

int sum(int arr[][4], int len);

// 二维数组
int main()
{

    const int SIZE = 2;
    int arr[SIZE][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};

    int total = sum(arr, SIZE);

    std::cout << "total=" << total << std::endl; // total=36
    return 0;
}

int sum(int arr[][4], int len)
{
    int total = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            total += arr[i][j];
        }
    }
    return total;
}