#include <iostream>
#include <cstring>

using namespace std;

//usefulthisptr.cpp

class TwoNumber {
	int num1;
	int num2;
public:
	TwoNumber(int num1, int num2) : num1(num1), num2(num2) {
		/*this->num1 = num1;
		this->num2 = num2;*/
	}
	void ShowTwoNumber() {
		cout << this ->num1 << endl;
		cout << this ->num2 << endl;
	}
};

int main() {
	TwoNumber two(2, 4);
	two.ShowTwoNumber();
	return 0;
}

//class Person {
//	char* name;
//	int age;
//public:
//	Person(char* myname, int myage) {
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy(name, myname);
//		age = myage;
//	}
//	Person() {
//		name = NULL;
//		age = 0;
//		cout << "called person()" << endl;
//	} // �⺻�����ڷ� ����ִ� ��ü�� ���� ����
//
//	void SetPersonInfo(char* myname, int myage) {
//		name = myname;
//		age = myage;
//	}
//
//	void ShowPersonInfo() const {
//		cout << "�̸� : " << name << endl;
//		cout << "���� : " << age << endl;
//	}
//	~Person() {
//		delete[]name;
//		cout << "called destructor" << endl;
//	}
//};
//
//int main() {
//	//Person parr[3];	//	�⺻�����ڸ� ���� �ʱ�ȭ(NULL)
//	Person* parr[3]; // �����͹迭
//	char namestr[100];	//	100��¥�� �迭
//	char* strprt;	//	������ �ּ�
//	int age;
//	int len;
//
//	for (int i = 0; i < 3; i++) {
//		cout << "�̸� : ";
//		cin >> namestr;
//		cout << "���� : ";
//		cin >> age;
//		//len = strlen(namestr) + 1;
//		//strprt = new char[len]; // ���� ��� ����
//		//strcpy(strprt, namestr); // �Է��� ���� ����
//		parr[i] = new Person(namestr, age);
//
//		(*parr[i]).ShowPersonInfo(); // ������ ���� Ŭ���� ��ü�� �Է�
//		
//		
//	}
//	(*parr[0]).ShowPersonInfo();
//	parr[1]->ShowPersonInfo();
//	parr[2]->ShowPersonInfo();
//
//	return 0;
//}