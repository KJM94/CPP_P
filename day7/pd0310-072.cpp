#include <iostream>

using namespace std;

class A
{
private:
    int aNum;

public:
    A() : aNum(20)
    { cout << "생성자A" << aNum << endl; }
    A(int x) : aNum(x)
    { cout << "매개변수 생성자A" << aNum << endl; }
    ~A()
    {
        cout << "~A() : " << aNum << endl;
    }
};

class B : public A
{
private:
    int bNum;
public:
    B() : A(), bNum(10)
    { cout << "생성자B" << bNum << endl; }
    B(int n1) : A(n1), bNum(20)
    { cout << "매개변수 생성자B" << bNum << endl; }

    B(int n1, int n2) : A(n1), bNum(n2)
    {
        cout << "매개변수 생성자B" << bNum << endl;
    }

    ~B()
    {
        cout << "~B() : " << bNum << endl;
    }
};



int main()
{
    B b;

    return 0;
}

