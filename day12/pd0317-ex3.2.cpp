#include <iostream>
#include <cstring>

using namespace std;

const int NAME_LEN = 20;

void ShowMenu(void); // 메뉴
void MakeAccount(void); // 계좌개설
void DepositMoney(void); // 입금
void WithdrawMoney(void); // 출금
void ShowAllAccInfo(void); // 잔액조회

enum{MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

class Account
{
    int accID;
    int pay;
    char* Cname;

public:
    Account(int id, int money, char* name)
        : accID(id), pay(money)
    {
        Cname = new char[strlen(name) + 1];
        strcpy(Cname, name);
    }

    int GetAccID()
    {
        return accID;
    }

    void Deposit(int money)
    {
        pay += money;
    }

    int Withdraw(int money)
    {
        if (pay < money)
        {
            return 0;
        }

        pay -= money;
        return money;
    }

    void ShowAccInfo()
    {
        cout << "계좌번호 : " << accID << endl;
        cout << "이름 : " << Cname << endl;
        cout << "잔액 : " << pay << endl;
    }

    ~Account()
    {
        delete[]Cname;
    }
};

Account* accArr[100]; // 어카운트 저장배열
int accNum = 0; // 저장된 어카운트 갯수



int main()
{
    int choose;

    while (1)
    {
        ShowMenu();
        cout << "선택 : "; cin >> choose;
        cout << endl;

        switch (choose)
        {
        case MAKE:
            MakeAccount();
            break;

        case DEPOSIT:
            DepositMoney();
            break;

        case WITHDRAW:
            WithdrawMoney();
            break;

        case INQUIRE:
            ShowAllAccInfo();
            break;

        case EXIT:
            for (int i = 0; i < accNum; i++)
            {
                delete accArr[i];
            }
            return 0;
        default:
            break;
        }
    }

    return 0;
}

void ShowMenu(void)
{
    cout << "1. 계좌개설" << endl;
    cout << "2. 입금" << endl;
    cout << "3. 출금" << endl;
    cout << "4. 잔액조회" << endl;
    cout << "5. 종료" << endl;
}

void MakeAccount(void)
{
    int id;
    char name[NAME_LEN];
    int pay;

    cout << "계좌번호 : "; cin >> id;
    cout << "이름 : "; cin >> name;
    cout << "입금 : "; cin >> pay;
    cout << endl;

    accArr[accNum++] = new Account(id, pay, name);
}

void DepositMoney(void)
{
    int money;
    int id;

    cout << "계좌번호 : "; cin >> id;
    cout << "입금 : "; cin >> money;

    for (int i = 0; i < accNum; i++)
    {
        if (accArr[i]->GetAccID() == id)
        {
            accArr[i]->Deposit(money);
            cout << "정상적으로 입금되었습니다." << endl;
            return;
        }
    }
    cout << "유효하지 않은 값입니다." << endl;
}

void WithdrawMoney(void)
{
    int money;
    int id;

    cout << "계좌번호 : "; cin >> id;
    cout << "출금 : "; cin >> money;

    for (int i = 0; i < accNum; i++)
    {
        if (accArr[i]->GetAccID() == id)
        {
            if (accArr[i]->Withdraw(money) == 0)
            {
                cout << "잔액부족" << endl;
                return;
            }
            cout << "정상적으로 출금되었습니다." << endl;
            return;
        }
    }
    cout << "유효하지 않은 값입니다." << endl;
}

void ShowAllAccInfo(void)
{
    for (int i = 0; i < accNum; i++)
    {
        accArr[i]->ShowAccInfo();
        cout << endl;
    }
}