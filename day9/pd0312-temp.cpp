#include <iostream>

using namespace std;

template<typename T>

//void Swap(T& num1, T& num2)
//{
//    T temp = num1;
//    num1 = num2;
//    num2 = temp;
//}

class Data
{
private:
    T data;
public:
    Data(T data) : data(data)
    {

    }

    void ShowInfo()
    {
        cout << data << endl;
    }

};


int main()
{
    Data<int> data1(3);
    data1.ShowInfo();

    Data<char> data2('b');
    data2.ShowInfo();

    Data<double> data3(3.14);
    data3.ShowInfo();


    /*int num1 = 10, num2 = 20;
    double num3 = 11.1, num4 = 22.2;
    cout << "이전, num1 : " << num1 << ", num2 : " << num2 << endl;
    Swap(num1, num2);
    cout << "이후, num1 : " << num1 << ", num2 : " << num2 << endl;

    cout << "이전, num3 : " << num3 << ", num4 : " << num4 << endl;
    Swap(num3, num4);
    cout << "이후, num3 : " << num3 << ", num4 : " << num4 << endl;*/

    return 0;
}
