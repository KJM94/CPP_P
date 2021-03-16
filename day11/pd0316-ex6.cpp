#include <iostream>
#include <string>
#include <random>

using namespace std;

int main() {
	
	random_device rd;
	mt19937 gen(rd());

	uniform_int_distribution<int> dis(1, 500);
	string com_out;

	
	int Count;

	cout << "숫자 입력 : "; cin >> Count;
	
	for (int i = 0; i < Count; i++)
	{
		int com = dis(gen);
		
		cout << "랜덤 숫자 : " << com;
		cout << endl;

		
	}
	
	
	

	return 0;
}
