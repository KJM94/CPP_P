#include <iostream>

using namespace std;

class SimpleClass {
	int num1;
	int num2;

public:
	// 생성자 : 클래스 이름과 동일하고 리턴타입이 없다.
	SimpleClass() { // 초기화 함수 => 생성자
		num1 = 0;
		num2 = 1;
	}

	SimpleClass(int n) { // 초기화 함수 => 생성자
		num1 = n;
		num2 = 1;
	}

	SimpleClass(int n1, int n2) { // 초기화 함수 => 생성자
		num1 = n1;
		num2 = n2;
	}

	int GetNum1() const {
		return num1;
	}

	int GetNum2() const {
		return num2;
	}

	void ShowData() const {
		cout << num1 << ' ' << num2 << endl;
	}

};

int main() {
	SimpleClass sc1;
	sc1.ShowData();
	SimpleClass sc2(1);
	sc2.ShowData();
	SimpleClass sc3(1,2);
	sc3.ShowData();

	return 0;
}