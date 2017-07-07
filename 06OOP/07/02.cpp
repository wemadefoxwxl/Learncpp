#include <iostream>

using std::cout;
using std::endl;

// 对于一个没有任何接口的类，如果想要把它定义成抽象类，只能将析构函数声明为纯虚的
// 通常情况下在基类中纯虚函数不需要实现
// 例外是纯析构函数一定要给出实现。给出一个空的实现即可。
class Base
{
public:
	virtual ~Base() = 0;

};

Base::~Base()
{

}

class Derived : public Base
{
public:
	virtual void fun();
};

void Derived::fun()
{
	cout << "fun" << endl;
}

int main()
{

	Derived d;
	return 0;
}