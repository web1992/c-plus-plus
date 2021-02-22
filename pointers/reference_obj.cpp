#include <iostream>
#include <string>

using namespace std;

string &strxxx(string &str1, const string &str2);

int main()
{

    string s1 = "abc";
    string s2 = "123";

    string s3 = strxxx(s1, s2);

    std::cout << "s3=" << s3 << std::endl;
    return 0;
}

string &strxxx(string &str1, const string &str2)
{

    string t = str1;
    // t = str1 + str2 + str1;
    str1 = str1 + str2 + str1;
    return str1;
}