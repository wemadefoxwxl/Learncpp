#include "MyString.h"

int main()
{
	MyString s1("AAA");
	s1.Display();
	MyString s2 = s1;
	// 调用拷贝构造函数
	// 系统提供的的默认拷贝构造函数实施的是浅拷贝  s2.str_ = s1.str)

	MyString s3;
	s3.Display();
	s3 = s2;
	// 调用等号运算符
	// 系统调用的默认等号运算符实施的是浅拷贝	s3.str_ = s2.str_
	// s3.operator=(s2);

	// 要让对象是独一无二的，我们要禁止拷贝
	// 方法是将拷贝构造函数与operator=运算符声明为私有，并且不提供他们的实现
	return 0;
}