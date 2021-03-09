#include <iostream>

using namespace std;

class PermanentWorker
{
	char name[100];
	int salary;	//	����
public:
	PermanentWorker(const char* name, int money) : salary(money)
	{
		strcpy(this->name, name);
	}
	int GetPay() const
	{
		return this->salary;
	}
	void ShowSalaryInfo() const
	{
		cout << "name : " << name << endl;
		cout << "salary : " << GetPay() << endl;
	}

};

class EmployeeHandler
{
	PermanentWorker* empList[50];	//	���� ������ �ο��� ������
	int empNum;						//	���� ���� �ο���
public:
	//	������
	EmployeeHandler():empNum(0){}
	//	�����߰�
	void AddEmployee(PermanentWorker* emp)
	{
		empList[empNum] = emp;
		empNum++;	//	0 -> 1
	}
	//	�̴޿� ���޵Ǵ� ����(�����) ��� ���
	void ShowAllSalryInfo() const
	{
		for (int i = 0; i < empNum; i++)
		{
			empList[i]->ShowSalaryInfo();
		}
	}
	//	���� ���޵Ǵ� �� �޿�
	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
		{
			sum += empList[i]->GetPay();
		}
		cout << "salary sum : " << sum << endl;
	}
	//	�Ҹ���
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
		{
			delete empList[i];
		}
	}
};


int main()
{
	EmployeeHandler handler;
	handler.AddEmployee(new PermanentWorker("KIM", 500));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("JUN", 2000));

	//�޿�����
	handler.ShowAllSalryInfo();

	//�޿��Ѿ�
	handler.ShowTotalSalary();

	return 0;
}