#include <iostream>

int main()
{

    using namespace std;

    int *nums = new int[3];
    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 13;
    cout << "array address=" << nums << endl;
    cout << "array address=" << &(nums[0]) << endl;

    cout << "array address=" << &nums << endl;
    cout << "array address=" << &nums[2] << endl;

    delete [] nums;
    return 0;
}