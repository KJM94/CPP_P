#include <iostream>

using namespace std;

class Base
{
private:
    int num1;
protected:
    int num2;
public:
    int num3;
    Base() :num1(1), num2(2), num3(3)
    {

    }
    int GetNum1()
    {
        return num1;
    }
    void SetNum1(int num1)
    {
        this->num1 = num1;
    }
};

class Delived : protected Base
{private:
    
public:
    // public : protected num2, public num3;
    // protected : protected num2, num3;
    // private : private num2, num3;
    void displayOutput()
    {
        // cout << "num1 : " << num1 << endl; // num1:private
        cout << "num2 : " << num2 << endl; // num2:protected
        cout << "num3 : "<< num3 << endl;  // num3:protected
    }
    
};

int main()
{
    Base b;
    b.GetNum1();


    //Delived de;
    //
    //// cout << de.num3 << endl;
    //
    //de.displayOutput();

    return 0;
}
