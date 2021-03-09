#include <iostream>

using namespace std;

class Person
{
    int age;
    char name[50];
public:
    Person(int myage, const char* myname) :age(myage)
    {
        strcpy(name, myname);
    }
    void WhatYourName() const
    {
        cout << "My name is" << name << endl;
    }
    void HowOldAreYou() const
    {
        cout << "나이는 " << age << endl;
    }
};

class UnivStudent :public Person // 상속
{
    char major[50]; //  전공과목
public:
    UnivStudent(const char* myname, int myage, const char* mymajor) : Person(myage, myname)
    {
        strcpy(major, mymajor);
    }
    void WhoAreYou() const
    {
        WhatYourName();
        HowOldAreYou();
        cout << "My major is " << major << endl;
    }
};

int main()
{
    UnivStudent std1("Lee", 19, "컴퓨터공학");
    std1.WhoAreYou();
    std1.HowOldAreYou();
    UnivStudent std2("Yoon", 21, "전기공학");
    std2.WhoAreYou();
    std2.WhatYourName();

    return 0;
}


