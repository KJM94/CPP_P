#include <iostream>
#include <random>
using namespace std;

int main() {
	random_device rd;

	


	
	
			int num = rd() % 5;		// 0 ~ 9 의 수를 갖는다.
			num += 1;					// 1 ~ 10 의 수를 갖는다.
			
			//int num = rd() % 10 + 1	// 한줄로 간단히 작성
			cout << num << " ";
		
		cout << "\n";
	

	return 0;
}