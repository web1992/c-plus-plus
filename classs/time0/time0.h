#include <iostream>
#ifndef TIME0_
#define TIME0_

class Time
{

private:
    static const int M_UNIT = 60;
    int hours;
    int minutes;

public:
    Time();
    Time(int h, int m);
    void AddHr(int h);
    void AddMin(int m);
    void Rest(int h = 0, int m = 0);
    Time operator+(const Time &t) const;
    Time operator-(const Time &t) const;
    Time operator*(double n) const;
    void Show();
    friend Time operator*(double n, const Time &t);
    friend std::ostream &operator<<(std::ostream &s, const Time &t);
};
#endif // TIME0_