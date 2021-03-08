#include <iostream>
#include "time0.h"

int main()
{

    Time t(0, 0);
    t.Show();

    t.AddHr(2);
    t.AddMin(18);
    std::cout << "after add" << std::endl;
    t.Show();

    Time t1(0, 0);

    t1.Show();
    t1.AddHr(2);
    t1.AddMin(2);

    Time tSum = t1 + t;
    std::cout << "after sum" << std::endl;
    tSum.Show();

    Time mSum = tSum * 5;
    mSum.Show();

    Time mSum2 = 2 * tSum;
    mSum2.Show();
    
    std::cout << "<<<<<<<<<" << std::endl;
    std::cout << mSum2;

    return 0;
}