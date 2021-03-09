#include <iostream>

using namespace std;

class PermanentWorker
{
	char name[100];
	int salary;	//	월급
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
	PermanentWorker* empList[50];	//	각각 정규직 인원의 데이터
	int empNum;						//	현재 고용된 인원수
public:
	//	생성자
	EmployeeHandler():empNum(0){}
	//	직원추가
	void AddEmployee(PermanentWorker* emp)
	{
		empList[empNum] = emp;
		empNum++;	//	0 -> 1
	}
	//	이달에 지급되는 월급(사람별) 모두 출력
	void ShowAllSalryInfo() const
	{
		for (int i = 0; i < empNum; i++)
		{
			empList[i]->ShowSalaryInfo();
		}
	}
	//	월에 지급되는 총 급여
	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
		{
			sum += empList[i]->GetPay();
		}
		cout << "salary sum : " << sum << endl;
	}
	//	소멸자
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

	//급여정보
	handler.ShowAllSalryInfo();

	//급여총액
	handler.ShowTotalSalary();

	return 0;
}