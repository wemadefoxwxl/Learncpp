#include <iostream>

using std::cout;
using std::endl;

class Base
{
public:
	virtual void Fun1() const
	{
		cout << "Base::Fun1" << endl;
	}

	virtual void Fun2() const
	{
		cout << "Base::Fun2" << endl;
	}

	void Fun3() const
	{
		cout << "Base::Fun3" << endl;
	}

	Base()
	{
		cout << "Base..." << endl;
	}

	// 如果一个类要作为多态的基类，要将析构函数定义成虚函数
	// 定义成虚析构函数，在删除基类的指针时才能调用子类的析构函数
	// 避免了内存泄漏
	virtual ~Base()
	{
		cout << "~Base..." << endl;
	}
};

class Derived : public Base
{
public:
	virtual void Fun1() const
	{
		cout << "Derived::Fun1" << endl;
	}

	virtual	void Fun2() const
	{
		cout << "Derived::Fun2" << endl;
	}

	virtual void Fun3() const
	{
		cout << "Derived::Fun3" << endl;
	}

	Derived()
	{
		cout << "Derived..." << endl;
	}

	virtual ~Derived()
	{
		cout << "~Derived..." << endl;
	}
};


int main()
{
	Base* p;
	p = new Derived;

	p->Fun1();
	delete p;

	return 0;
}





