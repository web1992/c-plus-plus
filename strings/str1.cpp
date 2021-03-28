//
// Created by Lucy on 2021/3/28.
//

#include <string>
#include <iostream>

int main() {

    std::cout << "hello world." << std::endl;

    using namespace std;

    string one("Lottery Winner");
    cout << one << endl;


    string tow(20, '$');
    cout << tow << endl;

    string three(one);
    cout << three << endl;

    one += " Oops!";
    cout << one << endl;


    tow = "Sorry! That was ";
    three[0] = 'P';


    string four;
    four = tow + three;
    cout << four << endl;

    char alls[] = "All's well that end well";
    string five(alls, 20);
    cout << five << "!\n";

    string six(alls + 6, alls + 10);
    cout << "six:" << six << endl;

    string seven(&five[6], &five[10]);
    cout << seven << endl;
    string eight(four, 7, 16);

    cout << eight << " in motion " << endl;


    return 0;
}
