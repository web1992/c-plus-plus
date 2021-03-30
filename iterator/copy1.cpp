#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    using namespace std;

    int casts[10] = {1, 3, 57, 8, 51, 3, 4, 6, 71, 1};
    vector<int> dice(10);
    copy(casts, casts + 10, dice.begin());

    cout << "Let the dice be case!\n";

    ostream_iterator<int, char> out_iter(cout, " ");
    copy(dice.begin(), dice.end(), out_iter);
    cout << endl;
    cout << "Implicit use of reverse iterator.\n";
    copy(dice.rbegin(), dice.rend(), out_iter);
    cout << endl;
    cout << "Explicit use of reverse iterator\n";
    vector<int>::reverse_iterator ri;
    for (ri = dice.rbegin(); ri != dice.rend(); ++ri)
    {
        cout << *ri << " ";
    }
    cout << endl;
    return 0;
}