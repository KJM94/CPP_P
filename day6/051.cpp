//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class Person {
//	char* name;
//	int age;
//public:
//	Person(const char* myname, int myage) {
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy(name, myname);
//		age = myage;
//	}
//	void ShowPersonInfo() const {
//		cout << "�̸� : " << name << endl;
//		cout << "���� : " << age << endl;
//
//	}
//	~Person() {
//		delete[]name;
//		cout << "called destructor" << endl;
//	}
//};
//
//class SoSimple {
//	int num1;
//	int num2;
//public:
//	SoSimple(int num1, int num2) :num1(num1), num2(num2) {
//
//	}
//	
//	// ������ ��������
//	explicit SoSimple(SoSimple &copy) :num1(copy.num1), num2(copy.num2) {
//		cout << "called SoSimple(SoSimple &copy)" << endl;
//	}
//
//	void ShowSimpleData() {
//		cout << num1 << endl;
//		cout << num2 << endl;
//	}
//};
//
//int main() {
//	Person man1("ȫ�浿", 19);
//	Person man2(man1);
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//
//
//	//SoSimple sim1(15, 20);
//	////SoSimple sim2 = sim1; ���� ������
//	//SoSimple sim2(sim1);
//	//sim2.ShowSimpleData();
//	
//
//	return 0;
//}