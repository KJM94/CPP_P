#include <iostream>
#include <cstring>

using namespace std;

class MyFriendInfo
{
	char* name;
	int age;
public:
	MyFriendInfo(const char* myname, int myage) : age(myage)
	{
		name = new char[strlen(name) + 1];
		strcpy(name, myname);
	}

	void ShowMyFriendInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	~MyFriendInfo()
	{
		delete[]name;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(const char* myname, int myage, const char* myaddr, const char* myphone) : MyFriendInfo(myname, myage)
	{
		addr = new char[strlen(addr) + 1];
		strcpy(addr, myaddr);

		phone = new char[strlen(phone) + 1];
		strcpy(phone, myphone);
	}

	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "주소 : " << addr << endl;
		cout << "전화 : " << phone << endl;
	}

	~MyFriendDetailInfo()
	{
		delete[]addr;
		delete[]phone;
	}
};

int main()
{
	MyFriendDetailInfo fr("kjm", 15, "add", "101");
	fr.ShowMyFriendDetailInfo();

	return 0;
}