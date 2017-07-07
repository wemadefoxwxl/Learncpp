#include <iostream>

using std::cout;
using std::endl;

class Base
{
public:
	virtual void Fun1() const
	{
		cout << "Base::Fun1...." << endl;
	}

	virtual void Fun2() const
	{
		cout << "Base::Fun2...." << endl;
	}
public:
	int data1_;
};


class Derived : public Base
{
public:
	virtual void Fun2() const
	{
		cout << "Derived::Fun2..." << endl;
	}

	virtual void Fun1() const 
	{
		cout << "Derived::Fun1..." << endl;
	}

	virtual void Fun3() const
	{
		cout << "Derived::Fun3..." << endl;
	}
private:
	int data2_;
};

typedef void (*FUNC)();

int main()
{
	cout << sizeof(Base) << endl;
	cout << sizeof(Derived) << endl;

	Base b;
	long** p =(long**)&b;
	FUNC fun = (FUNC)p[0][0];
	fun();
	fun = (FUNC)p[0][1];
	fun();
	cout << endl;

	Derived d;
	p = (long**)&d;
	fun = (FUNC)p[0][0];
	fun();
	fun = (FUNC)p[0][1];
	fun();
	fun = (FUNC)p[0][2];
	fun();
	cout << endl;

	Base* pp = &d;
	pp->Fun2();
	// 不能用虚函数指针调用基类中不存在的成员函数或数据成员。
	// pp->Fun3();

	return 0;
}











