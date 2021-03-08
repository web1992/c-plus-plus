#include <iostream>
#include "time0.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddHr(int h)
{

    hours += h;
}

void Time::AddMin(int m)
{
    minutes = minutes + m;
    hours = hours + minutes / M_UNIT;
    minutes = minutes % M_UNIT;
}

void Time::Rest(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::Show()
{
    std::cout << "hours: " << hours << " minutes: " << minutes << std::endl;
}

Time Time::operator+(const Time &t) const
{
    Time sum;
    int ht = hours + t.hours;
    int mt = minutes + t.minutes;
    sum.hours = ht + mt / M_UNIT;
    sum.minutes = mt % M_UNIT;
    return sum;
}

Time Time::operator-(const Time &t) const
{
    Time diff;
    int tol1, tol2;

    tol2 = hours * M_UNIT + minutes;
    tol1 = t.hours * M_UNIT + t.minutes;

    diff.hours = (tol2 - tol1) / M_UNIT;
    diff.minutes = (tol2 - tol1) % M_UNIT;

    return diff;
}

// 成员函数
Time Time::operator*(double n) const
{
    Time result;
    int m = hours * M_UNIT + minutes;
    m *= n;
    result.hours = m / M_UNIT;
    result.minutes = m % M_UNIT;
    return result;
}

// 友元函数
// 1.非成员函数
// 2.友元函数可以访问私有变量
Time operator*(double n, const Time &t)
{
    return t * n; // equals t.operator*(n)
}

std::ostream &operator<<(std::ostream &os, const Time &t)
{
    os << "hours: " << t.hours << " minutes: " << t.minutes << std::endl;
    return os;
}