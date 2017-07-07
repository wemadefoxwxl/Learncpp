#include <iostream>

using std::cout;
using std::endl;

class Base
{
public:
	static int n_;
};

int Base::n_ = 100;

class Derived : public Base
{

};


int main()
{
	Base b;
	Derived d;

	cout << b.n_ << endl;
	d.n_ = 200;
	cout << b.n_ << endl;

	return 0;
}