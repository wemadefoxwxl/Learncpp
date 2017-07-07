#include <iostream>
#include "Test.h"

using std::cout;
using std::endl;

void TestFun(const Test t)
{
	cout << "TestFun" << endl;
}

void TestFun2(const Test& t)
{
	cout << "TestFun2" << endl;
}


Test TestFun3(const Test t)
{
	cout << "TestFun3" << endl;
	return t;
}

const Test& TestFun4(const Test& t)
{
	cout << "TestFun4" << endl;
	return t;
}


int main()
{
	Test t(10);
	// TestFun(t);
	// TestFun2(t);
	//t = TestFun3(t);
	// Test t2 = TestFun3(t);
	// const Test& t3 = TestFun3(t);

	const Test& t4 = TestFun4(t);

	cout << "...." << endl;


	return 0;
}