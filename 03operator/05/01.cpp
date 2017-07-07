#include <iostream>
#include "Integer.h"

using std::cout;
using std::endl;

int main()
{
	Integer n(10);
	cout << n << endl;

	++n;
	cout << n << endl;

	cout << n++ << endl;
	cout << n << endl;
	cout << endl;

	Integer n1(100);
	// 转换构造函数
	n1 = 200;
	cout << n1 << endl;

	int x = n1;
	// 类型转换运算符
	cout << static_cast<int>(n) << endl;

	return 0;
}
