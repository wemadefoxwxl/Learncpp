#include "Test.h"

int main()
{
	Test t;
	// 析构函数可以显示调用，但是一般很少用。
	// t 会被析构两个   1.显示调用，2.对象销毁
	t.~Test();

	return 0;
}