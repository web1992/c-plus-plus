#include <iostream>
#include <array>
#include <vector>

void test();

int main()
{
    test();

    return 0;
}

void test()
{
    char actor[30];
    short betsie[100];
    float chuck[13];
    long double dipsea[64];

    std::array<char, 30> actor_array;
    std::array<short, 100> betsie_array;
    std::array<float, 13> chuck_array;
    std::array<long double, 64> dipsea_array;

    dipsea_array[0] = 1.0;
    std::cout << "dipsea_array[0]=" << dipsea_array[0] << std::endl;

    std::vector<char> actor_vertor(30);

    int even_nums[5] = {1, 3, 5, 7, 9};
    int even = even_nums[1];
    even = even_nums[4];
    std::cout << "even=" << even << std::endl;

    float float_nums[] = {1.1, 2.2, 3.3};
    std::cout << "float_nums[1]=" << float_nums[1] << std::endl;

    char char_test[] = "cheeburger";

    std::string str1 = "Waldof Sald";

    struct fish
    {
        std::string pinzhong;
        int weight;
        float len;
    };

    fish fish1 = {"haixian", 10, 5.1};
    std::cout << "fish1.pinzhong=" << fish1.pinzhong << std::endl;

    enum Response
    {
        No,
        Yes,
        Mybe
    };

    double ted = 1.1234;
    double *ted_p = &ted;

    float treacle[10] = {};
    std::cout << "treacle[0]=" << treacle[0] << std::endl;
    std::cout << "treacle[9]=" << treacle[9] << std::endl;

    std::cout << "end test" << std::endl;
}