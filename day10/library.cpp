/*
�����뿩 �ý����� �䱸����

�� �����뿩�ý����� �ÿ��������� ���������� ������� �뿩������ ���� �뿩 �� �� �ִ�. ������ �ݳ� �� �뿩�Ⱓ�� �ʰ��� ��� ��üó���� �� �� �ִ�.

�� �ý��ۿ����� ����� ������ ����� ���, ����� ����, ����� ����, ����� ��ȸ�� �� �� �ִ�. ���� ������ ���� ���, ���� ����, ���� ����, ���� ��ȸ�� �� �� �ִ�.

�뿩 �� �ݵ�� ����� ��ȸ�� ���� ��ȸ�� �ؾ� �Ѵ�.

�Ӽ�: �����ID, ����ھ�ȣ, ����, ����ID, ������, ���ǻ�, �뿩ID, �뿩��, �ݳ���
�Լ� : �뿩, �ݳ�, ��ü, ����ڵ��, ����ڼ���, ����ڻ���, �������ȸ, �������, ��������, ��������, ������ȸ

*/

#include <iostream>
#include <cstring>
// #include <fstream>

using namespace std;

//ȸ���� ���� Ŭ����

class User
{
	char* name; // �̸�
	int UserID; // ���̵�
	int Ioan; // �������� å

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
		cout << "�̸� : " << name << endl;
		cout << "���̵� : " << UserID << endl;
		cout << "���� �� : " << Ioan << endl;
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
	cout << "���� ���α׷� �޴�" << endl;
	cout << "1. ���̵� ���" << endl;
	cout << "2. ���� ���" << endl;
	cout << "3. å ����" << endl;
	cout << "4. å �ݳ�" << endl;
	cout << "5. ����� ����" << endl;
	cout << "6. ����" << endl;
	cout << "���� : ";
}

void BookHandler::BOOK()
{
	char name[20];
	int ID;
	int m;

	cout << "���� ���" << endl;
	cout << "å �̸� : "; cin >> name;
	cout << endl;
	cout << "å ��ȣ : "; cin >> ID;
	cout << endl;

	B[book++] = new Book(ID, name);

	cout << "��� �Ϸ�" << endl;
	cout << "�ƹ� ���� �Է�" << endl;
	cin >> m;
	system("cls");
}

void BookHandler::USER()
{
	char name[20];
	int ID;
	int Ioan = 0;
	int m;

	cout << "����� ���" << endl;
	cout << "�̸� : "; cin >> name;
	cout << endl;
	cout << "��ȣ : "; cin >> ID;
	cout << endl;

	U[user++] = new User(name, ID, Ioan);

	cout << "��� �Ϸ�" << endl;
	cout << "�ƹ� ���� �Է�" << endl;
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
			cout << "å ��ȣ : "; cin >> BookID;
			cout << endl;

			for (j = 0; j < book; j++)
			{
				if (B[j]->GetID() == BookID && B[j]->RETURNF() == 0)
				{
					U[i]->Ioan1(BookID);
					B[j]->changeF();

					cout << "���� �Ϸ�" << endl;
					cout << "�ƹ� ���� �Է�" << endl;
					cin >> m;
					system("cls");

					return;
				}
				else
				{
					int m;

					cout << "�̹� ����� å�Դϴ�." << endl;
					cout << "�ƹ� ���� �Է�" << endl;
					cin >> m;
					system("cls");
				}
			}
		}
	}

	cout << "db�����Դϴ�." << endl;
	cout << "�ƹ� ���� �Է�" << endl;
	cin >> m;
	system("cls");

	return;
}


void BookHandler::RETURN() // �ݳ�
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
			cout << "�ݳ�å ��ȣ : "; cin >> BookID;
			cout << endl;

			for (j = 0; j < book; j++)
			{
				if (B[j]->GetID() == BookID && B[j]->RETURNF() == 1)
				{
					B[j]->changeF2();
					U[i]->Ioanreturn();

					cout << "�ݳ�" << endl;
					cout << "�ƹ� ���� �Է�" << endl;
					cin >> m;
					system("cls");

					return;
				}
				else
				{
					int m;

					cout << "�̹� �ݳ��Ǿ����ϴ�." << endl;
					cout << "�ƹ� ���� �Է�" << endl;
					cin >> m;

					system("cls");
				}
			}
		}
	}

	cout << "db�����Դϴ�." << endl;
	cout << "�ƹ� ���� �Է�" << endl;
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

	cout << "�ƹ� ���� �Է�" << endl;
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


