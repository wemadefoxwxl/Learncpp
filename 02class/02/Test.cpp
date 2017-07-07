#include <iostream>
#include "Test.h"

void Test::Init(int x ,int y ,int z)
{
	x_ = x;
	y_ = y;
	z_ = z;
}

void Test::Display()
{
	std::cout << "x = " << x_ << " y = " << y_ << " z = " << z_ << std::endl;
}