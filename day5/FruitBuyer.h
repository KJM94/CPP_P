#include <iostream>
#ifndef __FRUITBUYER_H__
#define __FRUITBUYER_H__
#include "FruitSeller.h"

class FruitBuyer {
	int myMoney;
	int numOfApples;
public:
	FruitBuyer(int money);

	void BuyApples(FruitSeller& seller, int money);

	void ShowBuyResult() const;

};

#endif // !__FRUITBUYER_H__



