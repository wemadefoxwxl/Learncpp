#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Employee
{
public:
	Employee(const string& name,const int age,const int deptno)
			:name_(name),age_(age),deptno_(deptno)
			{

			}
	Employee(const Employee& other)
			:name_(other.name_),age_(other.age_),deptno_(other.deptno_)
	{
		cout << "Employee(const Employee& other)" << endl; 
	}
private:
	string name_;
	int age_;
	int deptno_;
};

class Manager : public Employee
{
public:
	Manager(const string& name,const int age,const int deptno,int level)
			:Employee(name,age,deptno),level_(level)
			{

			}

	// 从语法上来演示基类对象可以转换为派生类对象,但是没有意义
	Manager(const Employee& other):Employee(other),level_(-1)
	{
		cout << "Manager(const Employee& other)" << endl;
	}	

private:
	int level_;
};

int main()
{
	Employee e1("wxl001",22,20);
	Manager m1("wxl002",23,20,10);

	m1 = e1;


	return 0;
}









