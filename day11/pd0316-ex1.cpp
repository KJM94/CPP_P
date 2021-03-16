#include <iostream>
#include <string>

using namespace std;

int rev1(int n1) 
{
    string s1 = to_string(n1);
    reverse(s1.begin(), s1.end());


    return atoi(s1.c_str());
}

int rev2(int n2)
{
    string s2 = to_string(n2);
    reverse(s2.begin(), s2.end());

    return atoi(s2.c_str());
}

int main() 
{
    int n1 = 0;
    int n2 = 0;

    cout << "두 수 입력 : ";
    cin >> n1, n2;

    if (rev1(n1) < rev2(n2))
    {
        cout << rev2(n2) << endl;
    }
    else
    {
        cout << rev1(n1) << endl;
    }
    
}

//int reverse(int n1, int n2)
//{
//    string s1 = to_string(n1);
//    reverse(s1.begin(), s1.end());
//
//    string s2 = to_string(n2);
//    reverse(s2.begin(), s2.end());
//
//    return atoi(s1.c_str()), atoi(s2.c_str());
//    
//
//}
//
//
//int main()
//{
//    int num1, num2;
//
//
//    cout << "두 수 입력 : "; cin >> num1, num2;
//
//    
//
//    if ((num1) < (num2))
//    {
//        cout << num2 << endl;
//    }
//    else
//    {
//        cout << num1 << endl;
//    }
//
//    return 0;
//}
