#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;

class Grand
{

private:
    int hold;

public:
    Grand(int h) : hold(h) {}
    virtual void Speak() const { cout << "[Grand Speak]: I am a grand class\n"; }
    virtual int Value() const { return hold; }
};

class Superb : public Grand
{

public:
    Superb(int h = 0) : Grand(h) {}
    void Speak() const { cout << "[Superb Speak]: I am a superb class\n"; }
    virtual void Say() const
    {
        cout << "[Superb Say]: I hold the value of " << Value() << "!\n";
    }
};

class Maginficent : public Superb
{
private:
    char ch;

public:
    Maginficent(int h = 0, char c = 'A') : Superb(h), ch(c) {}
    void Speak() const
    {
        cout << "[Maginficent Speak]: I am Maginficent class \n";
    }
    void Say() const
    {
        cout << "[ Maginficent Say]: I hold the character " << ch << "and the int value " << Value() << "!\n";
    }
};

Grand *GetOne()
{
    Grand *p;
    switch (std::rand() % 3)
    {
    case 0:
        p = new Grand(std::rand() % 100);
        break;
    case 1:
        p = new Superb(std::rand() % 100);
        break;
    case 2:
        p = new Maginficent(std::rand() % 100, 'A' + std::rand() % 26);
        break;
    }

    return p;
}

int main()
{
    std::srand(std::time(0));
    Grand *pg;
    Superb *ps;

    for (int i = 0; i < 5; i++)
    {
        pg = GetOne();
        pg->Speak();
        if (ps = dynamic_cast<Superb *>(pg))
        {
            ps->Say();
        }
    }

    return 0;
}
