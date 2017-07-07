#include <iostream>
#include <string>
#include "stringUtil.h"
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s = "  abcd   ";
	stringUtil::LTrim(s);
	cout << " [ "<< s << "]" << endl;

	s = "  abcd   ";
	stringUtil::RTrim(s);
	cout << " [ "<< s << "]" << endl;

	s = "  abcd   ";
	stringUtil::Trim(s);
	cout << " [ "<< s << "]" << endl;

	return 0;
}