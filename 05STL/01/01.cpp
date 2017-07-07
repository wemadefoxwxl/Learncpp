#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{	
	string s1;
	string s2("1234567890");
	cout << s2 << endl;

	// 等价于string s3("abc");
	std::basic_string<char> s3("abc");
	cout << s3 << endl;

	string s5(s2,2,3);
	cout << s5 << endl;

	string::iterator it1 = s2.begin() + 1;
	string::iterator it2 = s2.begin() + 3;

	string s6(it1,it2);
	cout << s6 << endl;


	return 0;
}