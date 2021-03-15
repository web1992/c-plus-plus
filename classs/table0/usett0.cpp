#include "tablenn0.h"
#include <iostream>

int main()
{
    using namespace std;
    TableTennisPlayer p1("Chunk", "Bizz", true);
    TableTennisPlayer p2("Lucy", "Tom", false);
    p1.Name();
    if (p1.HasTable())
    {
        cout << "you has a table\n";
    }
    else
    {
        cout << "you not has a table\n";
    }
    p2.Name();

    if (p2.HasTable())
    {
        cout << "you has a table\n";
    }
    else
    {
        cout << "you not has a table\n";
    }
    return 0;
}