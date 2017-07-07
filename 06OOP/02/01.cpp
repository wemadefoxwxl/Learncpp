#include <iostream>

using std::cout;
using std::endl;

class ObjectB
{
public:
	ObjectB(int objb) : objb_(objb)
	{
		cout << "ObjectB...." << endl;
	}

	~ObjectB()
	{
		cout << "~ObjectB..." << endl;
	}
private:
	int objb_;
};

class ObjectD 
{
public:
	ObjectD(int objd):objd_(objd)
	{
		cout << "ObjectD..." << endl;
	}

	~ObjectD()
	{
		cout << "~ObjectD..." << endl;
	}
private:
	int objd_;
};

class Base
{
public:
	Base(int b) : b_(b),objb_(111)
	{
		cout << "Base..." << endl;
	}

	Base(const Base& other) : objb_(other.objb_),b_(other.b_)
	{
		cout << "Base(const Base& other)..." << endl;
	}

	~Base()
	{
		cout << "~Base..." << endl;
	}

private:
	int b_;
	ObjectB objb_;
};

class Derived : public Base
{
public:
	Derived(int b,int d):d_(d),Base(b),objd_(222)
	{
		cout << "Derived..." << endl;
	}

	Derived(const Derived& other) :Base(other),d_(other.d_),objd_(other.objd_)
	{
		cout << "Derived(const Derived& other)" << endl;
	}

	~Derived()
	{
		cout << "~Derived ... " << endl;
	}
private:
	int d_;
	ObjectD objd_;
};

class Combine
{
public:
	Combine(int b,int d):objd_(d),objb_(b)
	{
		cout << "Combine..." << endl;
	}

	~Combine()
	{
		cout << "~Combine..." << endl;
	}

public:
	ObjectB objb_;
	ObjectD objd_;
};


int main()
{
	Derived d(100,200);

	Base b1(100);
	Base b2(b1);


	cout << endl;
	cout << "over ...." << endl;
	cout << endl;

	Combine c(10,20);
	cout << sizeof(c) << endl;
	return 0;
}











