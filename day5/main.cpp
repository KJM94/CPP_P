#include <iostream>
#include "FruitBuyer.h"
#include "FruitSeller.h"

using namespace std;

int main() {
	// 판매자 : 사과 가격(1000), 보유수(20), 잔액(0)
	FruitSeller seller(1000, 20, 0);
	// 구매자 : 보유금액(5000)
	FruitBuyer buyer(5000);
	// 과일 구입 : 2000원 사과 구입
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매 현황 : " << endl;
	seller.ShowSalesResult();
	cout << "과일 구매 현황 : " << endl;
	buyer.ShowBuyResult();

	
	return 0;
}