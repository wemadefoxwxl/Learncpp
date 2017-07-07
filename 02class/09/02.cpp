#include <iostream>

using std::cout;
using std::endl;

class Test
{
public:
	Test()
	{

	}

	~Test()
	{

	}
	// 整型static const 成员可以在类定义体中初始化
	static const int x_  = 100;
};


int main()
{
	cout << Test::x_ << endl;
}