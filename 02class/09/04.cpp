#include <iostream>
using std::cout;
using std::endl;

class Test
{
public:
	Test(int y) : y_(y)
	{

	}

	~Test()
	{

	}

	void TestFun()
	{
		// OK,非静态成员函数可以访问静态成员
		cout << "x = " << x_ << endl;
		TestStaticFun();
	}

	static void TestStaticFun()
	{
		// ERROR, 静态成员函数不能调用非静态成员函数
		// ERROR，静态成员函数不能调用静态成员函数
		cout << "TestStaticFun..." << endl;
		// TestFun();
		// cout << "y = " << y_ << endl;
	}

public:
	// 静态成员函数引用性说明
	static int x_;
	int y_;
};

// 静态数据成员的定义性说明
int Test::x_ = 100;

int main()
{
	cout << sizeof(Test) << endl;	//4
}