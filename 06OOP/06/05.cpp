#include <iostream>

using std::cout;
using std::endl;

class Base
{
public:
	Base()
	{
		cout << "Base..." << endl;
		fun();
	}

	~Base()
	{
		cout << "~Base..." << endl;
	}

	virtual void fun()
	{
		cout << "Base::fun..." << endl;
	}
};

class  Derived : public Base
{
public:
	Derived()
	{
		cout << "Derived..." << endl;
		fun();
	}

	~Derived()
	{
		cout << "~Derived..." << endl;
	}

	virtual void fun()
	{
		cout << "Derived::fun..." << endl;
	}

};

int main()
{
	Base b;
	cout << endl;
	// 1. 先在operator new中构造了基类的虚函数表，再调用基类的构造函数
	// 2. 然后调用operator new替换基类的虚函数表为子类的虚函数表，在调用子类的构造函数。
	Derived d;


	return 0;
}