#include <iostream>

class Person{

    private:
        std::string fname;
        std::string lname;
    public:
        void show(const Person &);
        void newPerson(Person &);
        void setFname(std::string fname);
        void setLname(std::string lname);
};
