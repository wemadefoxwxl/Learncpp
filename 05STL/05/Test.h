#ifndef TEST_H
#define TEST_H

#include <iostream>

using std::cout;
using std::endl;

class Test
{
public:
	Test()
	{
		cout << "Test() " << endl;
	}

	~Test()
	{ 
		cout << "~Test() " << endl;
	}

	Test(const Test& other)
	{
		cout << "Test(const Test& other)" << endl;
	} 
};

#endif