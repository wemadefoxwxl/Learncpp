#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1("abcdefg");
	cout << s1.size() << endl;
	cout << s1.length() << endl;
	cout << std::boolalpha << s1.empty() << endl;

	cout << s1.substr(1,2) << endl;
	cout << s1.substr(1) << endl;

	string::size_type pos = s1.find('d',1);
	if(string::npos == pos)
		cout << "Not Found" << endl;
	else
		cout << "pos = " << pos << endl;

	pos = s1.rfind('r');
	if(pos == string::npos)
		cout << "Not Found" << endl;
	else
		cout << "pos = " << pos << endl;

	return 0;
}