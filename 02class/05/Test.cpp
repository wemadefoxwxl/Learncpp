#include <iostream>
#include "Test.h"

using std::cout;
using std::endl;

// 不在参数的构造函数称为默认构造函数
Test::Test()
{
	num_ = 0;
	cout << "Initializing Defalut ..." << endl;
}

Test::Test(int num)
{
	num_ = num;
	cout << "Initializing " << num_ << endl;
}

Test::~Test()
{
	cout << "Distroy " << num_ << endl;
}

void Test::Display()
{
	cout << "num = " << num_ << endl;
}

Test& Test::operator=(const Test& other)
{
	cout << "Test::operator=" << endl;
	if(this == &other)
	{
		return *this;
	}

	num_ = other.num_;
	return *this;
}