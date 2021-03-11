#include <iostream>

using namespace std;



class First
{
public:
    virtual void MyFunc()
    {
        cout << "First Func" << endl;
    }
};

class Second : public First
{
public:
    virtual void MyFunc()
    {
        cout << "Second Func" << endl;
    }
};

class Third : public Second
{
public:
    virtual void MyFunc()
    {
        cout << "Third Func" << endl;
    }
};


//class Base
//{
//public:
//    void BaseFunction()
//    {
//        cout << "BaseFunction" << endl;
//    }
//};
//
//class Derived : public Base
//{
//    void DerivedBaseFunction()
//    {
//        cout << "DerivedBaseFunction" << endl;
//    }
//};

int main()
{
    First* fptr = new First();
    fptr->MyFunc();
    delete fptr;

    fptr = new Second();
    fptr->MyFunc();
    delete fptr;

    /*Second* sptr = new Second();
    First* fptr = sptr;*/

    

    /*Third* tptr = new Third();
    Second* sptr = tptr;
    First* fptr = sptr;*/

    /*fptr->MyFunc();
    sptr->MyFunc();
    tptr->MyFunc();*/

    /*Base* bptr = new Derived();
    bptr->BaseFunction();*/
    
    /*Derived* dptr = new Derived();
    Base* bptr = dptr;*/

    return 0;
}
