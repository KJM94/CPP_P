#include <iostream>

using namespace std;

void Divide(int num1, int num2)
{
	if (num2 == 0)
	{
		throw num2;
	}
	cout << "나눗셈의 몫 : " << num1 / num2 << endl;
	cout << "나눗셈의 나머지 : " << num1 % num2 << endl;
}

int main()
{
	int num1, num2;
	cout << "두 수 입력 : ";
	cin >> num1 >> num2;

	try
	{
		Divide(num1, num2);
		cout << "나눗셈 결과" << endl;
	}
	catch (int expn)
	{
		cout << "제수는 " << expn << "이 될 수 없습니다." << endl;
		cout << "프로그램을 다시 실행하세요." << endl;
	}

	return 0;
}


//int main()
//{
//	int num1, num2;
//
//	cout << "두 수 입력 : ";
//	cin >> num1 >> num2;
//
//	try
//	{
//		if (num2 == 0)
//		{
//			throw num2;
//		}
//		cout << "나눗셈의 몫 : " << num1 / num2 << endl;
//		cout << "나눗셈의 나머지 : " << num1 % num2 << endl;
//	}
//	catch (int expn)
//	{
//		cout << "제수는" << expn << "이 될 수 없습니다." << endl;
//		cout << "프로그램을 다시 실행하세요." << endl;
//	}
//	cout << "종료" << endl;
//
//	return 0;
//}


//void func1()
//{
//	throw 0;
//}
//
//void func2()
//{
//	func1();
//}
//
//void func3()
//{
//	func2();
//}
//
//void func4()
//{
//	func3();
//}
//
//
//int main()
//{
//	try
//	{
//		func4();
//	}
//	catch(int exception)
//	{
//		cout << "예외발생 : " << exception << "!!" << endl;
//	}
//
//	return 0;
//}

//void devide_function(int a, int b)
//{
//	if (b == 0)throw~b;
//	cout << "a/b = " << a / b << "입니다." << endl;
//}
//
//void MyFunc(int c)
//{
//	if (c > numeric_limits<char>::max())	//	-128~127
//	{
//		throw invalid_argument("MyFunc argument too large");
//	}
//}
//
//int main()
//{
//	int a, b;
//	/*cout << "두개의 정수를 입력하세요 : ";
//	cin >> a >> b;*/
//	//예외처리 시작
//	try
//	{
//
//		MyFunc(10);
//	}
//	catch(invalid_argument& e) 
//	{
//		cerr << e.what() << endl;
//		return -1;
//	}
//
//	/*if (b == 0)
//	{
//		cout << "0으로 나눌 수 없습니다." << endl;
//	}
//	else
//	{
//		cout << "a/b = " << a / b << "입니다." << endl;
//	}*/
//	
//	
//	//예외처리 구간 끝
//
//	return 0;
//}
