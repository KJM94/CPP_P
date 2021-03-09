#include <iostream>

using namespace std;

class SoSimple
{
	int num1;
	mutable int num2; // const 함수에 대해 예외처리
public:
	SoSimple(int n1, int n2) :num1(n1), num2(n2) {}
	void ShowSimpleData() const
	{
		cout << num1 << ", " << num2 << endl;
	}

	void CopyToNum2() const
	{
		num2 = num1;
	}

};

int main() {
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();

	return 0;
}

// int simObjCnt = 0;
//int cmxObjCnt = 0;
//
//class SoSimple {
//	/*static int simObjCnt;*/
//public:
//	static int simObjCnt;
//	SoSimple() {
//		simObjCnt++;
//		cout << simObjCnt << "번째 SoSimple객체" << endl;
//	}
//};
//
//int SoSimple::simObjCnt = 0;
//
//class SoComplex {
//	/*static int cmxObjCnt;*/
//public:
//	static int cmxObjCnt;
//	SoComplex() {
//		cmxObjCnt++;
//		cout << cmxObjCnt << "번째 SoComplex객체" << endl;
//	}
//	SoComplex(SoComplex& copy) {
//		cmxObjCnt++;
//		cout << cmxObjCnt << "번째 SoComplex객체" << endl;
//	}
//};
//
//int SoComplex::cmxObjCnt = 0;
//
////static int cnt; // 0
////void Counter();
////
////void Counter() {
////	
////	cnt++; // 1
////	cout << "현재 cnt : " << cnt << endl;
////}
//
//int main() {
//	cout << SoSimple::simObjCnt << endl;
//	//SoSimple 객체가 생성되기 이전
//	SoSimple sim1;
//	SoSimple sim2;
//
//	cout << SoComplex::cmxObjCnt << endl;
//	//SoComplex 객체가 생성되기 이전
//	SoComplex com1;
//	SoComplex com2 = com1;
//	SoComplex();
//
//
//	/*for (int i = 0; i < 10; i++) {
//		Counter();
//	}*/
//
//	return 0;
//}