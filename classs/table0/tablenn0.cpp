#include <string>
#include <iostream>
#include "tablenn0.h"

TableTennisPlayer::TableTennisPlayer(const string &fn,
                                     const string &ln, bool h) : firstname(fn),
                                                                 lastname(ln),
                                                                 hasTable(h) {}
void TableTennisPlayer::Name() const
{
    std::cout << lastname << "," << firstname << std::endl;
}