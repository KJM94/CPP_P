#include <iostream>

using namespace std;

class SoSimple {
    int num;
public:
    SoSimple(int n) :num(n) {

    }
    SoSimple& AddNum(int n) {
        num += n;
        return *this;
    }
    void SimpleFunc() {
        cout << "SimpleFunc : " << num << endl;
    }
    void SimpleFunc() const {
        cout << "const SimpleFunc : " << num << endl;
    }
    void ShowData() const {
        cout << "num : " << num << endl;
    }
};

void YourFunc(const SoSimple& obj) {
    obj.SimpleFunc();
}

int main()
{
    SoSimple obj1(2);
    const SoSimple obj2(7);

    obj1.SimpleFunc();
    obj2.SimpleFunc();
    YourFunc(obj1);
    YourFunc(obj2);





    //const SoSimple obj(7); // obj객체의 데이터 변경을 허용하지 않음
    //obj.ShowData();
    //// obj.AddNum(20); 데이터 변경 num =7 -> 27
    //obj.ShowData();

    return 0;
}
