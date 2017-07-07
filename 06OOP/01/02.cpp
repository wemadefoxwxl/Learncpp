#include <iostream>

using std::cout;
using std::endl;

class Base
{
public:
	Base():x_(0)
	{
	}

	int GetBaseX() const
	{
		return x_;
	}

	void show() const
	{
		cout << "Base::show() ..." << endl;
	}
public:
	int x_;
};

class Derived : public Base
{
public:
	Derived():x_(0)
	{

	}

	int GetDerivedX() const
	{
		return x_;
	}

	void show(int n) const
	{
		cout << "Derived::show(int n)...	" << n << endl;
	}

	void show() const
	{
		cout << "Derived::show..." << endl;
	}
	int x_;
};

// 组合方式
class Combine
{
public:
	Base b_;
	int x_;
};


int main()
{
	Derived d;
	d.x_ = 10;
	d.Base::x_ = 20;
	cout << d.GetBaseX() << endl;
	cout << d.GetDerivedX() << endl; 

	// 调用子类的show()
	d.show();	
	d.Base::show();

	cout << "sizeof(Base)  : " << sizeof(Base) << endl;
	// Derived和Combine的内存模型没有什么不同
	cout << "sizeof(Derived) : " << sizeof(Derived) << endl;
	cout << "sizeof(Combine)  : " << sizeof(Combine) << endl;

	return 0;
}










