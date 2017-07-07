#include <iostream>

using std::cout;
using std::endl;

// 引用作为函数返回值
int a[] = {0,1,2,3,4,5};

int& index(int i)
{
	return a[i];
}


int main()
{
	index(3) = 100;
	// 引用作为函数返回值，使得函数可以放在赋值运算符的左边
	// 函数返回引用，引用在函数返回的时候初始化
	// index(3)在函数返回的时候被初始化为a[3];

	cout << "a[3] = " << a[3] << endl;


	return 0;
}