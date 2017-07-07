// #include <iostream>

// using std::cout;
// using std::endl;
#include <stdio.h>

void fun(int a ,int b)
{
	// cout << "int fun " << endl;
	printf("void fun(int a ,int b)\n");
}

void fun(double a,double b)
{
	// cout << "double fun " << endl;
	printf("void fun(double a,double b)\n");
} 

// extern "C" 表示不进行名字改编
#ifdef __cplusplus
extern "C"
{
#endif

void fun(int a)
{
	// cout << "XXXX" << endl;
	printf("void fun(int a)\n");
}

void fun2(double a)
{
	// cout << "YYYY" << endl;
	printf("void fun2(double a)\n");
} 
#ifdef __cplusplus
}
#endif