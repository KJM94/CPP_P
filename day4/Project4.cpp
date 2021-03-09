//#include <iostream>
//#include "Point.h"
//
//using namespace std;
//
//class Point {
//private:
//	int x;
//	int y;
//public:
//	bool InitMembers(int xpos, int ypos);
//	int GetX() const;
//	int GetY() const;
//	bool SetX(int xpos);
//	bool SetY(int ypos);
//};
//
//bool Point::InitMembers(int xpos, int ypos) {
//	if (xpos < 0 || ypos < 0) {
//		cout << "out of range" << endl;
//		return false;
//	}
//	else {
//		x = xpos;
//		y = ypos;
//	}
//	return true;
//}
//
//int Point::GetX() const {
//	return x;
//}
//int Point::GetY() const {
//	return y;
//}
//
//bool Point::SetX(int xpos) {
//	if (xpos < 0 || xpos < 0) {
//		return false;
//	}
//	else {
//		x = xpos;
//	}
//	return true;
//}
//
//bool Point::SetY(int ypos) {
//	if (ypos < 0 || ypos < 0) {
//		return false;
//	}
//	else {
//		y = ypos;
//	}
//	return true;
//}
//
//class Rectangle {
//public:
//	Point upLeft;
//	Point lowRight;
//public:
//	void ShowRecInfo() {
//		cout << "좌상 : " << '[' << upLeft.GetX() << ',';
//		cout << upLeft.GetY() << ']' << endl;
//		cout << "우하 : " << '[' << lowRight.GetX() << ',';
//		cout << lowRight.GetY() << ']' << endl;
//	}
//};
//
//int main() {
//	Point pt1;
//	pt1.InitMembers(5, 5);
//	Point pt2;
//	pt2.InitMembers(20, 30);
//	Rectangle rect = { pt2, pt1 };
//
//	
//
//	rect.ShowRecInfo();
//
//	return 0;
//}


#include <iostream>

using namespace std;

class FruitSeller {
private:
    int APPLE_PRICE;
    int ORANGE_PRICE;
    int numOfApples;
    int numOfOrange;
    int myMoney;
public:
    void InitMembers(int price, int num, int money, int num2, int price2) {
        APPLE_PRICE = price;
        ORANGE_PRICE = price2;
        numOfApples = num;
        myMoney = money;
        numOfOrange = num2;
    }

    void ShowSalesResult() {
        cout << "남은 사과 : " << numOfApples << endl;
        cout << "남은 오렌지 : " << numOfOrange << endl;
        cout << "판매 수익 : " << myMoney << endl;
    }

    int SaleApples(int money) {
        if (money > 0) {
            cout << "db오류" << endl;
            return 0;
        }

        int num = money / APPLE_PRICE;
        numOfApples -= num;
        myMoney += APPLE_PRICE * num;
        return num;
    }

    int SaleOrange(int money) {
        if (money > 0) {
            cout << "db오류" << endl;
            return 0;
        }
        int num2 = money / ORANGE_PRICE;
        numOfOrange -= num2;
        myMoney += ORANGE_PRICE * num2;
        return num2;
    }
};

class FruitBuyer {
    int myMoney;    //  default : private
    int numOfApples;
    int numOfOrange;
public:
    void InitMembers(int money) {
        myMoney = money;
        numOfApples = 0;
        numOfOrange = 0;
    }

    void BuyApples(FruitSeller& seller, int money) {
        if (money > 0) {
            cout << "db오류" << endl;
            return;
        }
        numOfApples += seller.SaleApples(money);
        myMoney -= money;
    }

    void BuyOrange(FruitSeller& seller, int money) {
        if (money > 0) {
            cout << "db오류" << endl;
            return;
        }
        numOfOrange += seller.SaleOrange(money);
        myMoney -= money;
    }

    void ShowBuyResult() {
        cout << "구매한 사과 : " << numOfApples << endl;
        cout << "구매한 오렌지 : " << numOfOrange << endl;
        cout << "현재 금액 : " << myMoney << endl << endl;
    }
};

int main()
{
    FruitSeller seller;
    seller.InitMembers(1000, 20, 0, 2, 2000);    //  사과가격, 갯수, 잔액, 오렌지갯수, 오렌지가격
    FruitBuyer buyer;
    buyer.InitMembers(15000);
    buyer.BuyApples(seller, 5000);
    buyer.BuyOrange(seller, 4000);
    cout << "판매자 현황  " << endl;
    seller.ShowSalesResult();
    cout << "구매자 현황  " << endl;
    buyer.ShowBuyResult();
    return 0;
}

