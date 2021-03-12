#include <iostream>

using namespace std;

class Student
{
private:
    char* name;
    int age;
public:
    Student(const char* name, int age) : age(age)
    {
        this->name = new char[10];
        strcpy(this->name, name);
    }
    void ShowInfo()
    {
        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
    }
    Student& operator=(Student& ref)
    {
        delete[]name;
        name = new char[10];
        strcpy(name, ref.name);
        age = ref.age;
        return *this;
    }

    ~Student()
    {
        delete[]name;
        cout << "Student 소멸자 호출" << endl;
    }
};


//class A
//{
//private:
//    int num1, num2;
//public:
//    A()
//    {
//
//    }
//    A(int num1, int num2) :num1(num1), num2(num2)
//    {
//
//    }
//
//    void ShowData()
//    {
//        cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
//    }
//};
//
//class B
//{
//private:
//    int num1, num2;
//public:
//    B()
//    {
//
//    }
//    B(int num1, int num2) :num1(num1), num2(num2)
//    {
//
//    }
//
//    void ShowData()
//    {
//        cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
//    }
//};

class NUMBOX
{
private:
    int num1, num2;
public:
    NUMBOX()
    {

    }
    NUMBOX(int num1, int num2) :num1(num1), num2(num2)
    {

    }

    void ShowNumber()
    {
        cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
    }
    /*NUMBOX operator+(NUMBOX& ref)
    {

        return NUMBOX(num1 + ref.num1, num2 + ref.num2);
    }*/

    NUMBOX operator++() //  전위증가 ++a
    {
        num1 += 1;
        num2 += 1;

        return *this;
    }

    NUMBOX operator++(int)  //  후위증가 a++
    {
        NUMBOX temp(*this);
        num1 += 1;
        num2 += 1;

        return temp;
    }

    /*NUMBOX operator-(NUMBOX& ref)
    {

        return NUMBOX(num1 + ref.num1, num2 + ref.num2);
    }

    NUMBOX operator*(NUMBOX& ref)
    {

        return NUMBOX(num1 + ref.num1, num2 + ref.num2);
    }

    NUMBOX operator/(NUMBOX& ref)
    {

        return NUMBOX(num1 + ref.num1, num2 + ref.num2);
    }*/
    //friend NUMBOX operator+ (int num, NUMBOX ref);
};

////전역함수 오버로딩
//NUMBOX operator+ (int num, NUMBOX ref)
//{
//    ref.num1 += num;
//    ref.num2 += num;
//    return ref;
//}

int main()
{

    Student s1("kjm", 20);
    Student s2("fdg", 21);

    s2 = s1;

    s1.ShowInfo();
    s2.ShowInfo();




    /*A a1(10, 20);
    A a2;

    B b1(30, 40);
    B b2;

    a2 = a1;
    b2 = b1;

    a2.ShowData();
    b2.ShowData();*/




    //NUMBOX n1(10, 20);
    //NUMBOX n2;
    //n2 = n1++;
    //n2.ShowNumber();
    //n1.ShowNumber();

    //// NUMBOX result = 10 + n1 + 5;

    //n2 = ++n1;
    //n2.ShowNumber();
    //n1.ShowNumber();
    
    
    //NUMBOX result = n1 + n2;
    //NUMBOX result = n1.operator+(n2);   //  n1 + n2;
    //NUMBOX result_add2 = n1 + 5;
    /*NUMBOX result_Sub = n1 - n2;
    NUMBOX result_Mul = n1 * n2;
    n1.ShowNumber();
    n2.ShowNumber();
    result.ShowNumber();
    result_Sub.ShowNumber();
    result_Mul.ShowNumber();*/
    /*result_add2.ShowNumber();*/

    return 0;
}
