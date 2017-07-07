#include <iostream>
using namespace std;

// 引用不是变量
// 引用仅仅只是变量的别名
// 引用没有自己独立的空间
// 引用要与它所引用的变量共享空间
// 对引用所做的改变实际上是对它所引用的变量的改变
// 引用在定义的时候要进行初始化
// 引用一经过初始化，不能重新指向其他的变量

int main()
{
	int val = 100;
	// int& refval;		ERROR ，引用必须经过初始化
	const int& refval = 200;  //200常量 ，必须用const 
	int& ref = val;
	ref = 200;		//将200赋值给ref，实际上改变的是val这个变量

	cout << "val : " << val << endl;

	int val2 = 500;
	ref = val2;	
	// 不代表讲val引用至val2这个变量，仅仅只是代表将val2赋值给ref

	cout << "val : " << val<< endl;

	return 0;
}
