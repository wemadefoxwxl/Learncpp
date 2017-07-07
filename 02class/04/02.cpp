#include <iostream>
#include "Test.h"

using std::cout;
using std::endl;

Test t(10);

// 全局变量的构造先于main函数
int main()
{
	cout << "Entering main..." << endl;
	cout << "Exiting  main..." << endl;

	return 0;
}