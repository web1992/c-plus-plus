#include <string>

#ifndef TABLE_H_0
#define TABLE_H_0

using namespace std;

class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;

public:
    TableTennisPlayer(const string &fn = "none", const string &ln = "none", bool h = false);
    void Name() const;
    bool HasTable() const { return hasTable; }
    void RestTable(bool v) { hasTable = v; }
};

#endif