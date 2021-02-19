#include <iostream>

int sum_array(const int *begin, const int *end);

// 数组求和
int main()
{

    const int ArgSize = 4;
    int nums_array[ArgSize] = {1, 2, 3, 4};
    int sum = sum_array(nums_array, nums_array + ArgSize);
    std::cout << "sum = " << sum << std::endl;

    return 0;
}

int sum_array(const int *begin, const int *end)
{
    const int *pt = begin;

    int total = 0;
    for (pt = begin; pt != end; pt++)
    {
        total += *pt;
    }

    return total;
}