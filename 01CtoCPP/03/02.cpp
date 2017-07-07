#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int* p = new int(22);		//分配一个整数空间
	cout << *p << endl;

	int* p2 = new int[10];		//分配连续的10个空间

	const int* p3 = new const int(10);  //const变量的动态创建
	cout << *p3 << endl;

	const int* p4 = new int(20);  //
	// *p4 = 200;

	delete p;
	delete[] p2;
	delete p3;  //和普通的一样
	delete p4;

	return 0;
}