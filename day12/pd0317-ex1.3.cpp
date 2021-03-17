#include <iostream>

using namespace std;

class Animal
{
public:
    void cry()
    {
        cout << "짖는소리" << endl;
    }
};

class Dog : public Animal
{
public:
    void cry()
    {
        cout << "개짖는소리 왈왈" << endl;
    }
};

class Cat : public Animal
{

public:
    void cry()
    {
        cout << "고양이 짖는소리 냐옹" << endl;
    }
};



int main()
{
    Dog d;
    Cat c;

    d.cry();
    c.cry();

    return 0;
}
