#include <string>
#include <iostream>
using namespace std;

typedef struct _Student
{
    unsigned age;
    unsigned grade;
    string name;
} Student;

int main(int argc, char **argv)
{
    // 完成Student s的初始化，age = 16，grade = 1，name = “Jack”

    Student s = {
        .name = "Jack",
        .grade = 1,
        .age = 16,
    };

    cout << "Age   : " << s.age << endl;
    cout << "Grade : " << s.grade << endl;
    cout << "Name  : " << s.name << endl;

    return 1;
}