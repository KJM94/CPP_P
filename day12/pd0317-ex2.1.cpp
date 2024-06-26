﻿#include <iostream>

using namespace std;

template<typename SwapData>

void Swap(SwapData& num1, SwapData& num2)
{
    SwapData temp = num1;
    num1 = num2;
    num2 = temp;
}


int main()
{
    int num1 = 2, num2 = 4;
    double num3 = 1.14, num4 = 3.57;

    cout << "스왑이전, num1 : " << num1 << ", num2 : " << num2 << endl;
    Swap(num1, num2);
    cout << "스왑이후, num1 : " << num1 << ", num2 : " << num2 << endl;
    
    cout << "스왑이전, num3 : " << num3 << ", num4 : " << num4 << endl;
    Swap(num3, num4);
    cout << "스왑이후, num3 : " << num3 << ", num4 : " << num4 << endl;


    return 0;
}
