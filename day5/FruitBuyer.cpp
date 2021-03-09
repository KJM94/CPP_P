#include <iostream>
#include "FruitBuyer.h"


using namespace std;


int myMoney;
int numOfApples;

FruitBuyer::FruitBuyer(int money) {
	myMoney = money;
	numOfApples = 0;
}

void FruitBuyer::BuyApples(FruitSeller& seller, int money) {
	numOfApples += seller.SaleApples(money);
	myMoney -= money;
}

void FruitBuyer::ShowBuyResult() const {
	cout << "���� �ܾ� : " << myMoney << endl;
	cout << "��� ���� : " << numOfApples << endl;
}
