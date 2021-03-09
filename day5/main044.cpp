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
//	} // 기본생성자로 비어있는 객체에 값을 설정
//
//	void SetPersonInfo(char* myname, int myage) {
//		name = myname;
//		age = myage;
//	}
//
//	void ShowPersonInfo() const {
//		cout << "이름 : " << name << endl;
//		cout << "나이 : " << age << endl;
//	}
//	~Person() {
//		delete[]name;
//		cout << "called destructor" << endl;
//	}
//};
//
//int main() {
//	//Person parr[3];	//	기본생성자를 통해 초기화(NULL)
//	Person* parr[3]; // 포인터배열
//	char namestr[100];	//	100개짜리 배열
//	char* strprt;	//	포인터 주소
//	int age;
//	int len;
//
//	for (int i = 0; i < 3; i++) {
//		cout << "이름 : ";
//		cin >> namestr;
//		cout << "나이 : ";
//		cin >> age;
//		//len = strlen(namestr) + 1;
//		//strprt = new char[len]; // 아직 비어 있음
//		//strcpy(strprt, namestr); // 입력한 내용 복사
//		parr[i] = new Person(namestr, age);
//
//		(*parr[i]).ShowPersonInfo(); // 복사한 내용 클래스 객체에 입력
//		
//		
//	}
//	(*parr[0]).ShowPersonInfo();
//	parr[1]->ShowPersonInfo();
//	parr[2]->ShowPersonInfo();
//
//	return 0;
//}