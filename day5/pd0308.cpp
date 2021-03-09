#include <iostream>

using namespace std;

class SimpleClass {
	int num1;
	int num2;

public:
	// ������ : Ŭ���� �̸��� �����ϰ� ����Ÿ���� ����.
	SimpleClass() { // �ʱ�ȭ �Լ� => ������
		num1 = 0;
		num2 = 1;
	}

	SimpleClass(int n) { // �ʱ�ȭ �Լ� => ������
		num1 = n;
		num2 = 1;
	}

	SimpleClass(int n1, int n2) { // �ʱ�ȭ �Լ� => ������
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