#include <iostream>
#include <string>
#include <new>

using namespace std;
const int BUF = 512;

class JustTest
{

private:
    string word;
    int num;

public:
    JustTest(const string &s = "Juest Testing", int n = 0)
    {
        word = s;
        num = n;
        cout << word << " constructed\n";
    }

    ~JustTest()
    {
        cout << word << " constructed\n";
    }

    void Show() const
    {
        cout << word << "," << num << std::endl;
    }
};

int main()
{
    char *buf = new char[BUF];
    JustTest *pc1, *pc2;

    pc1 = new (buf) JustTest;
    pc2 = new JustTest("Hep1", 20);

    cout << "Memory block addresses:\n"
         << "buffer: "
         << (void *)buf << " heap: " << pc2 << endl;
    cout << "Memory contents:\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    JustTest *pc3, *pc4;
    pc3 = new (buf + sizeof(JustTest)) JustTest("Better Idea", 6);
    pc4 = new JustTest("Heap2", 10);

    cout << "Memory content:\n";
    cout << pc3 << ":";
    pc3->Show();
    cout << pc4 << ":";
    pc4->Show();

    delete pc2;
    delete pc4;
    pc3->~JustTest();
    pc1->~JustTest();

    delete[] buf;
    cout << "Done\n";

    return 0;
}