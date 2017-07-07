#include <iostream>
#include "String.h"

using wl::String;
int main()
{
	String s1("abc");
	String s2(s1);

	String s3;
	s3 = s1;
	s3.Display();

	s3 = "XXX";
	s3.Display();

	String s4;
	std::cout << std::boolalpha << !s4 << std::endl;

	s4 = "aaa";
	std::cout << std::boolalpha << !s4 << std::endl;

	return 0;
}