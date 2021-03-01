#include <iostream>



struct job
{
    char name[40];
    double salary;
    int floor;
};

template <class T>
void Swap1(T &, T &);

template <>
void Swap1(job &, job &);


template <>
void Swap1(job &j1, job &j2)
{
    int f = j1.floor;
    j1.floor = j2.floor;
    j2.floor = f;
}

int main()
{
    job j1 = {"Lucy", 1.1, 20};
    job j2 = {"Tom", 2.2, 30};

    std::cout << "job1=" << j1.floor << std::endl;
    std::cout << "job2=" << j2.floor << std::endl;

    Swap1(j1, j2);

    std::cout << "job1=" << j1.floor << std::endl;
    std::cout << "job2=" << j2.floor << std::endl;

    return 0;
}

