#include <iostream>

#ifndef __FRUITSELLER_H__
#define __FRUITSELLER_H__


class FruitSeller {
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:
	FruitSeller(int price, int num, int money);

	int SaleApples(int money);

	void ShowSalesResult() const;

};

#endif // !__FRUITSELLER_H




