#include <iostream>

using std::cout;
using std::endl;

int main()
{
	// const int a;	//ERROR ,常量必须被初始化
	const int a = 100;
	// a = 200;	//ERROR,常量不能重新被赋值

	int b = 22;
	const int* p; //const 放在*左边，表示*p为常量，经由*p不能更改指针所指向的内容
	p = &b;
	// *p = 100;  //ERROR，常量不能被重新赋值

	// int* const p2; ERROR,p2为常量，必须初始化
	int* const p2 = &b;  //const在*右边，表示p2为常量
	*p2 = 123;
	int c = 100;
	// p2 = &c;			//ERROR，常量不能被重新赋值

	cout << b << endl;


	return 0;
}