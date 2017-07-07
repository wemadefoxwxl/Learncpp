#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

void fun(char* str)
{
	cout << str << endl;
}

int main()
{
	string s1 = "abcdefg";

	s1[1] = 'B';

	cout << s1 << endl;

	const string s2 = "xyz";
	// Error s2[1] 返回的是const char&
	// s2[1] = 'Y';

	string s3 = "111" + s1 + "222";
	cout << s3 << endl;

	// cout << s3.c_str() << endl;
	fun(const_cast<char*>(s3.c_str()));

	return 0;
}