#include <iostream>
#include <string>

using namespace std;
namespace RISK_LEVEL
{
	enum
	{
		RISK_A = 30, RISK_B = 20, RISK_C = 10
	};
}

// Employee class 고용인
// 이름정보 : char name[100]

class Employee
{
private:
	char name[100];
public:
	Employee(const char* name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout << "name : " << name << endl;
	}

	virtual int GetPay() const
	{
		return 0;
	}

	virtual void ShowSalaryInfo() const
	{
		
	}
};

class PermanentWorker : public Employee
{
private:
	int salary;	//	월급
public:
	PermanentWorker(const char* name, int money)
		:Employee(name), salary(money)
	{

	}

	int GetPay() const
	{
		return salary;
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "Salary : " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;	//	현재까지 영업 실적
	double bonusRatio;	//	영업실적대비 보너스 비율
public:
	SalesWorker(const char* name, int money, double ratio)
		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{

	}
	void AddSalesResult(int value)	//	실적 추가
	{
		salesResult += value;
	}

	int GetPay() const
	{
		return PermanentWorker::GetPay() + (int)(salesResult*bonusRatio);
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "Salary : " << GetPay() << endl << endl;
	}
};

class TemporaryWorker : public Employee
{
private:
	int workTime;	//	근무시간
	int payPerHour;	//	시급
public:
	TemporaryWorker(const char* name, int pay)
		: Employee(name), workTime(0), payPerHour(pay)
	{

	}
	void AddWorkTime(int time)
	{
		workTime += time;
	}

	int GetPay() const
	{
		return payPerHour * workTime;
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "Salary : " << GetPay() << endl << endl;
	}

};

class ForeignSalesWorker : public SalesWorker
{
private:
	const int riskLevel;
public:
	ForeignSalesWorker(const char* name, int money, double ratio, int risk)
		: SalesWorker(name, money, ratio), riskLevel(risk)
	{

	}
	int GetRiskPay() const
	{
		return (int)(SalesWorker::GetPay() * (riskLevel / 100.0));
	}

	int GetPay() const
	{
		return SalesWorker::GetPay() + GetRiskPay();
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "Salary : " << SalesWorker::GetPay() << endl;
		cout << "risk pay : " << GetRiskPay() << endl;
		cout << "sum : " << GetPay() << endl;
	}
};

class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{

	}
	void AddEmployee(Employee* emp)
	{
		empList[empNum] = emp;
		empNum++;
	}
	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
		{
			empList[i]->ShowSalaryInfo();
		}
	}

	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
		{
			sum += empList[i]->GetPay();
		}
		cout << "직원월급총합 : " << sum << endl;
	}
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

	//직원등록
	handler.AddEmployee(new PermanentWorker("kim", 1000));
	handler.AddEmployee(new PermanentWorker("lee", 1500));
	handler.AddEmployee(new PermanentWorker("jun", 2000));

	//	임시직등록
	TemporaryWorker* alba = new TemporaryWorker("jung", 1);
	alba->AddWorkTime(20);
	handler.AddEmployee(alba);

	//	영업직등록
	SalesWorker *seller = new SalesWorker("han", 100, 0.1);
	seller->AddSalesResult(2000);
	handler.AddEmployee(seller);

	//해외 영업직 등록
	ForeignSalesWorker* fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
	fseller1->AddSalesResult(7000);	//	영업실적7000
	handler.AddEmployee(fseller1);

	ForeignSalesWorker* fseller2 = new ForeignSalesWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
	fseller2->AddSalesResult(7000);	//	영업실적7000
	handler.AddEmployee(fseller2);

	ForeignSalesWorker* fseller3 = new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);
	fseller3->AddSalesResult(7000);	//	영업실적7000
	handler.AddEmployee(fseller3);

	
	//----등록

	//출력
	handler.ShowAllSalaryInfo();

	handler.ShowTotalSalary();

	return 0;
}

//class Circle
//{
//    int radius;
//
//public:
//    
//    Circle(int r) : radius(r)
//    {
//        
//    }
//    int getRadius()
//    {
//        return radius;
//    }
//
//    void ShowRadius()
//    {
//        cout << "반지름 : " << radius << endl;
//    }
//};
//
//class  Pizza : public Circle
//{
//public:
//    Pizza() : Circle(10)
//    {
//
//    }
//    Pizza(int radius) : Circle(radius)
//    {
//
//    }
//    double getArea()
//    {
//        return getRadius() * getRadius() * 3.14;
//    }
//};
//
//int main()
//{
//    Circle circle(5);
//    circle.ShowRadius();
//
//    Pizza pizza(15);
//    cout << "면적 : " << pizza.getArea() << endl;
//
//    Pizza cheezePizza;
//    Pizza* cDer = &cheezePizza;
//
//    Circle* cbase = cDer;   //  업캐스팅
//    //기본클래스 포인터가 가리키는 객체(cbase)를 유도클래스 포인터(cDer)로 가리키는 것
//    cout << "치즈피자면적 : " << cDer->getArea() << endl;
//    cbase->ShowRadius();
//    // cbase->getArea();
//
//    return 0;
//}
