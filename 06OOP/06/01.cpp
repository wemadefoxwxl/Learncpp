#include <iostream>

using std::cout;
using std::endl;

class Base
{
public:
	virtual void Fun1()
	{
		cout << "Base::Fun1" << endl;
	}

	virtual void Fun2()
	{
		cout << "Base::Fun2" << endl;
	}

	void Fun3()
	{
		cout << "Base::Fun3" << endl;
	}
};

class Derived : public Base
{
public:
	virtual void Fun1()
	{
		cout << "Derived::Fun1" << endl;
	}

	virtual	void Fun2()
	{
		cout << "Derived::Fun2" << endl;
	}

	virtual void Fun3()
	{
		cout << "Derived::Fun3" << endl;
	}
};

int main()
{
	Base* p;
	Derived d;

	p = &d;
	// Fun1,Fun2是虚函数，基类指针指向派生类对象，调用的是派生类对象的虚函数
	p->Fun1();
	p->Fun2();
	// Fun3是非虚函数，根据指针p指针实际类型来调用相应类的成员函数
	p->Fun3();

	return 0;
}













