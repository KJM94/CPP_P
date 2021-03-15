/*
도서대여 시스템의 요구사항

본 도서대여시스템은 시용자정보와 도서정보를 기반으로 대여정보에 의해 대여 할 수 있다. 도서를 반납 시 대여기간이 초과한 경우 연체처리를 할 수 있다.

본 시스템에서는 사용자 정보를 사용자 등록, 사용자 수정, 사용자 삭제, 사용자 조회를 할 수 있다. 도서 정보는 도서 등록, 도서 수정, 도서 삭제, 도서 조회를 할 수 있다.

대여 시 반드시 사용자 조회와 도서 조회를 해야 한다.

속성: 사용자ID, 사용자암호, 성명, 도서ID, 도서명, 출판사, 대여ID, 대여일, 반납일
함수 : 대여, 반납, 연체, 사용자등록, 사용자수정, 사용자삭제, 사용자조회, 도서등록, 도서수정, 도서삭제, 도서조회

*/

#include <iostream>
#include <cstring>
// #include <fstream>

using namespace std;

//회원에 대한 클래스

class User
{
	char* name; // 이름
	int UserID; // 아이디
	int Ioan; // 대출중인 책

public:
	User(char* name1, int UserID1, int Ioan1)
		:UserID(UserID1), Ioan(0)
	{
		name = new char[strlen(name1) + 1];
		strcpy(name, name1);
	}

	void Ioanreturn()
	{
		Ioan = 0;
	}

	void Ioan1(int Ioan2)
	{
		Ioan = Ioan2;
	}

	int GetIoan()
	{
		return Ioan;
	}

	int GetUserID()
	{
		return UserID;
	}

	void ShowInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "아이디 : " << UserID << endl;
		cout << "대출 수 : " << Ioan << endl;
	}

	~User()
	{
		delete[]name;
	}
};

class Book
{
	int ID;
	char* Bookname;
	int F;
public:

	Book(int ID1, char* Bookname1)
		:ID(ID1), F(0)
	{
		Bookname = new char[strlen(Bookname1) + 1];
		strcpy(Bookname, Bookname1);
	}

	void changeF()
	{
		F = 1;
	}

	void changeF2()
	{
		F = 0;
	}

	int GetID()
	{
		return ID;
	}

	int RETURNF()
	{
		return F;
	}

	~Book()
	{
		delete[]Bookname;
	}
};

class BookHandler
{
	User* U[256];
	Book* B[256];
	int user;
	int book;
public:
	BookHandler();

	void view();
	void USER();
	void BOOK();
	void IOAN();
	void RETURN();
	void Show();
	~BookHandler();
};

void BookHandler::view()
{
	cout << "도서 프로그램 메뉴" << endl;
	cout << "1. 아이디 등록" << endl;
	cout << "2. 도서 등록" << endl;
	cout << "3. 책 대출" << endl;
	cout << "4. 책 반납" << endl;
	cout << "5. 사용자 정보" << endl;
	cout << "6. 종료" << endl;
	cout << "선택 : ";
}

void BookHandler::BOOK()
{
	char name[20];
	int ID;
	int m;

	cout << "도서 등록" << endl;
	cout << "책 이름 : "; cin >> name;
	cout << endl;
	cout << "책 번호 : "; cin >> ID;
	cout << endl;

	B[book++] = new Book(ID, name);

	cout << "등록 완료" << endl;
	cout << "아무 정수 입력" << endl;
	cin >> m;
	system("cls");
}

void BookHandler::USER()
{
	char name[20];
	int ID;
	int Ioan = 0;
	int m;

	cout << "사용자 등록" << endl;
	cout << "이름 : "; cin >> name;
	cout << endl;
	cout << "번호 : "; cin >> ID;
	cout << endl;

	U[user++] = new User(name, ID, Ioan);

	cout << "등록 완료" << endl;
	cout << "아무 정수 입력" << endl;
	cin >> m;
	system("cls");
}

void BookHandler::IOAN()
{
	int m;
	int i;
	int ID;

	cout << "ID : "; cin >> ID;
	cout << endl;

	for (i = 0; i < user; i++)
	{
		if (U[i]->GetUserID() == ID)
		{
			int BookID;
			int j;
			cout << "책 번호 : "; cin >> BookID;
			cout << endl;

			for (j = 0; j < book; j++)
			{
				if (B[j]->GetID() == BookID && B[j]->RETURNF() == 0)
				{
					U[i]->Ioan1(BookID);
					B[j]->changeF();

					cout << "대출 완료" << endl;
					cout << "아무 숫자 입력" << endl;
					cin >> m;
					system("cls");

					return;
				}
				else
				{
					int m;

					cout << "이미 대출된 책입니다." << endl;
					cout << "아무 숫자 입력" << endl;
					cin >> m;
					system("cls");
				}
			}
		}
	}

	cout << "db오류입니다." << endl;
	cout << "아무 숫자 입력" << endl;
	cin >> m;
	system("cls");

	return;
}


void BookHandler::RETURN() // 반납
{
	int m;
	int i;
	int ID;
	
	cout << "ID : "; cin >> ID;
	cout << endl;

	for (i = 0; i < user; i++)
	{
		if (U[i]->GetUserID() == ID)
		{
			int BookID;
			int j;
			cout << "반납책 번호 : "; cin >> BookID;
			cout << endl;

			for (j = 0; j < book; j++)
			{
				if (B[j]->GetID() == BookID && B[j]->RETURNF() == 1)
				{
					B[j]->changeF2();
					U[i]->Ioanreturn();

					cout << "반납" << endl;
					cout << "아무 숫자 입력" << endl;
					cin >> m;
					system("cls");

					return;
				}
				else
				{
					int m;

					cout << "이미 반납되었습니다." << endl;
					cout << "아무 숫자 입력" << endl;
					cin >> m;

					system("cls");
				}
			}
		}
	}

	cout << "db오류입니다." << endl;
	cout << "아무 숫자 입력" << endl;
	cin >> m;
	system("cls");

	return;
}

void BookHandler::Show()
{
	int i;
	int m;

	for (i = 0; i < user; i++)
	{
		U[i]->ShowInfo();
		cout << endl;
	}

	cout << "아무 숫자 입력" << endl;
	cin >> m;
	system("cls");
}

BookHandler::BookHandler() : user(0), book(0)
{

}

BookHandler::~BookHandler()
{
	int i;
	int j;

	for (i = 0; i < user; i++)
	{
		delete U[i];
	}

	for (j = 0; j < book; j++)
	{
		delete B[j];
	}
}

int main()
{
	BookHandler AA;
	int i;

	while (1)
	{
		AA.view();
		cin >> i;
		cout << endl;
		fflush(stdin);

		switch (i)
		{
		case 1:
			AA.USER();
			break;
		case 2:
			AA.BOOK();
			break;
		case 3:
			AA.IOAN();
			break;
		case 4:
			AA.RETURN();
			break;
		case 5:
			AA.Show();
			break;
		case 6:
			return 0;
		default:
			break;
		}
	}

	return 0;
}


