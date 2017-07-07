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

private:
	string name_;
	int age_;
	int deptno_;
};

// public 继承
class Manage : public Employee
{
public:
	Manage(const string& name,const int age,const int deptno,const int level)
		:Employee(name,age,deptno),level_(level)
		{

		}

private:
	int level_;
};

// private 继承
class Manage2 : private Employee
{
public:
	Manage2(const string& name,const int age,const int deptno,const int level)
		:Employee(name,age,deptno),level_(level)
		{

		}

private:
	int level_;
};


int main()
{
	Employee e1("wxl001",22,20);
	Manage m1("wxl002",23,21,10);
	Manage2 m2("wxl003",24,22,12);

	Employee* pe;
	Manage* pm;
	Manage2* pm2;

	// 指针直接指向同类对象
	pe = &e1;
	pm = &m1;
	pm2 = &m2;

	// 派生类对象指针可以转换为基类对象指针。将派生类对象看成基类对象
	// 向上转型
	pe = &m1;

	// 基类对象指针无法转换为派生类对象指针,无法将基类对象看成派生类对象
	// pm = &e1;

	// 派生类对象可以转换为基类对象。将派生类对象看成基类对象
	// 会产生对象切割，派生类的特有成员消失
	// object slicing
	e1 = m1;

	// 私有或保护继承的时候，派生类对象指针不可以自动转换为基类的对象指针
	// pe = pm2;
	// 可以进行强制类型转换
	pe = reinterpret_cast<Employee*>(pm2);

	// 私有或保护继承的时候，派生类对象无法转换为基类对象
	// e1 = m2;
	// 强制类型转换也不可以
	// e1 = reinterpret_cast<Employee>(m2);

	// 基类指针可以强化转换为派生类指针，但是不安全
	// 不安全的向下转型
	pm = static_cast<Manage*>(pe);

	// 基类对象无法强制转换为派生类对象
	// m1 = reinterpret_cast<Manage>(e1);
	return 0;
}



















