#include <iostream>

using namespace std;

class SoSimple
{
	int num1;
	mutable int num2; // const �Լ��� ���� ����ó��
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
//		cout << simObjCnt << "��° SoSimple��ü" << endl;
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
//		cout << cmxObjCnt << "��° SoComplex��ü" << endl;
//	}
//	SoComplex(SoComplex& copy) {
//		cmxObjCnt++;
//		cout << cmxObjCnt << "��° SoComplex��ü" << endl;
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
////	cout << "���� cnt : " << cnt << endl;
////}
//
//int main() {
//	cout << SoSimple::simObjCnt << endl;
//	//SoSimple ��ü�� �����Ǳ� ����
//	SoSimple sim1;
//	SoSimple sim2;
//
//	cout << SoComplex::cmxObjCnt << endl;
//	//SoComplex ��ü�� �����Ǳ� ����
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