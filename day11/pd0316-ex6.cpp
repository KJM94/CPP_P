#include <iostream>
#include <random>
using namespace std;

int main() {
	random_device rd;

	


	
	
			int num = rd() % 5;		// 0 ~ 9 �� ���� ���´�.
			num += 1;					// 1 ~ 10 �� ���� ���´�.
			
			//int num = rd() % 10 + 1	// ���ٷ� ������ �ۼ�
			cout << num << " ";
		
		cout << "\n";
	

	return 0;
}