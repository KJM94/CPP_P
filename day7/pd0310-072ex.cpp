#include <iostream>

using namespace std;

class Book
{
	char* title;
	char* bn;
	int price;
public:
	Book(const char* booktitle, const char* bookbn, int bookprice) : price(bookprice)
	{
		title = new char[strlen(booktitle) + 1];
		strcpy(title, booktitle);
		bn = new char[strlen(bookbn) + 1];
		strcpy(bn, bookbn);
	}

	void ShowBookInfo()
	{
		cout << "제목 : " << title << endl;
		cout << "제품넘버 : " << bn << endl;
		cout << "가격 : " << price << endl;
	}
	~Book()
	{
		delete[]title;
		delete[]bn;
	}
};

class Ebook : public Book
{
	char* DRMkey;
public:
	Ebook(const char* booktitle, const char* bookbn, int bookprice, const char* key) :Book(booktitle, bookbn, bookprice)
	{
		DRMkey = new char[strlen(key) + 1];
		strcpy(DRMkey, key);
	}
	void ShowEBookInfo()
	{
		ShowBookInfo();
		cout << "인증키 : " << DRMkey << endl;
	}
	~Ebook()
	{
		delete[]DRMkey;
	}
};


int main()
{
	Book book("좋은 C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;
	Ebook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();

	return 0;
}


//class Rectangle
//{
//    int row;
//    int column;
//public:
//    Rectangle(int length1, int length2) :row(length1), column(length2)
//    {
//
//    }
//    void ShowAreaInfo()
//    {
//        cout << "면적 : " << row * column << endl;
//    }
//};
//
//class Square : public Rectangle
//{
//public:
//    Square(int num) : Rectangle(num, num)
//    {
//
//    }
//};
//
//int main()
//{
//    Rectangle rec(4, 3);
//    rec.ShowAreaInfo();
//
//    Square sqr(7);
//    sqr.ShowAreaInfo();
//
//    return 0;
//}
