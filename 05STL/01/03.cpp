#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1("abcdefghjjlmnop");
	s1.replace(2,2,"12345");
	cout << s1 << endl;

	s1 = "123456789";
	s1.replace(s1.begin()+1,s1.begin()+4,"AAAA");
	cout << s1 << endl;

	string s2 = "zbcdzxy";
	s2.insert(2,"WWWW");
	cout << s2 << endl;

	s2.append("6666");
	cout << s2 << endl;

	string s3 = "1111";
	s2.swap(s3);

	cout << s2 << endl;
	cout << s3 << endl;



	return 0;
}