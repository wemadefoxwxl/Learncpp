#include <iostream>
#include "String.h"

using std::cout;
using std::endl;
using namespace wl;
int main()
{
	String s("1234567890");
	cout << s << endl;

	char ch = s[2];
	cout << ch << endl;

	s[2] = 'A';
	cout << s << endl;

	const String s2("xxxyyyaaa");
	ch = s2[2];
	cout << s2 << endl;

	String s3 = "abc";
	String s4 = "def";

	String s5 = s3 + s4;
	cout << s5 << endl;

	String s6 = "asd" + s2 + "sdfs" + "vcx";
	cout << s6 << endl;

	String s7;
	std::cin >> s7;
	cout << s7 << endl; 


}