#include <iostream>

using namespace std;

template <typename T>

//13-1.2

T SumArray(T arr[], int len)
{
	T sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int main()
{
	double arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = (i + 1) * 2.5;
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	
	cout << SumArray(arr, 10) << endl;

	return 0;
}

//13-1.1

//void Swap(T& num1, T& num2)
//{
//    T temp = num1;
//    num1 = num2;
//    num2 = temp;
//}
//
//class Point
//{
//    int xpos, ypos;
//public:
//    Point(int x = 0, int y = 0) :xpos(x), ypos(y)
//    {
//
//    }
//
//    void ShowPosition() const
//    {
//        cout << xpos << ", " << ypos << endl;
//    }
//};
//
//int main()
//{
//    Point pos1(3, 4);
//    Point pos2(10, 20);
//    pos1.ShowPosition();
//    pos2.ShowPosition();
//    
//    Swap(pos1, pos2);
//    pos1.ShowPosition();
//    pos2.ShowPosition();
//
//    return 0;
//}
