#include <iostream>

using std::cout;
using std::endl;

int fun(int a, int b = 5)
{
	return a + b;
}

// 声明的时候进行默认值,编译时期就已经赋值了
int fun(int a, int b ,int c ,int d = 10);


int main()
{
	cout << fun(3) << endl;
	cout << fun(3,4) << endl;
	cout << fun(1,2,3) << endl;

	return 0;
}

int fun(int a,int b,int c ,int d )
{
	return a + b + c + d;
}