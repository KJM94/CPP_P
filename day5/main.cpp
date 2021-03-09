#include <iostream>
#include "FruitBuyer.h"
#include "FruitSeller.h"

using namespace std;

int main() {
	// �Ǹ��� : ��� ����(1000), ������(20), �ܾ�(0)
	FruitSeller seller(1000, 20, 0);
	// ������ : �����ݾ�(5000)
	FruitBuyer buyer(5000);
	// ���� ���� : 2000�� ��� ����
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ� ��Ȳ : " << endl;
	seller.ShowSalesResult();
	cout << "���� ���� ��Ȳ : " << endl;
	buyer.ShowBuyResult();

	
	return 0;
}