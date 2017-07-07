#include <iostream>
using std::cout;
using std::endl;


void swap(int& x,int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

int main()
{
	int a = 50;
	int b = 6;
	cout << "a = " << a << "  b = " << b << endl;
	
	//在函数调用时，引用被初始化 x = a,y = b
	swap(a,b);	
	cout << "a = " << a << "  b = " << b << endl;

	return 0;
}