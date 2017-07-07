#include <iostream>

using std::cout;
using std::endl;

// const引用是指向const对象的引用

int main()
{
	const int val = 1024;
	const int& refval = val;

	// int&ref = val; ERROR,refval是一个常量

	int val2 = 2046;
	const int& ref3 = val2;  //const reference to nonconst object

	double val3 = 3.14;
	const int& ref4 = val3;  //int tmp = val3;
							// const int& ref = tmp;
	cout << "ref4 = " << ref4 << endl;
	cout << "val3 = " << val3 << endl;

	//int& ref5 = val3; //ERROR


	return 0;
}
