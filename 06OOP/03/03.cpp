#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Manager;
class Employee
{
public:
	Employee(const string& name,const int age,const int deptno)
				:name_(name),age_(age),deptno_(deptno)
				{

				}
	operator Manager();

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

private:
	int level_;
};

Employee::operator Manager()
{
	cout << "Employee::operator Manager()" << endl;
	return Manager(name_,age_,deptno_,-1);
}


int main()
{
	Employee e1("wxl001",25,20);
	Manager m1("wxl002",32,20,10);

	m1 = static_cast<Manager>(e1);

	return 0;
}











