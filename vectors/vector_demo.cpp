#include <iostream>
#include <vector>

int main()
{

    using namespace std;

    vector<int> aaa(5);

    int n;
    cout << "Enter a num:" << endl;
    cin >> n;

    vector<double> bbb(n);
    bbb[0] = n;

    cout << bbb[0] << endl;

    return 0;
}