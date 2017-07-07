#include <iostream>

using std::cout;
using std::endl;

int main()
{
	bool result;
	result = 100;
	cout << "sizeof(result) " << sizeof(result) << endl;
	cout << std::boolalpha << result << endl;


	return 0;
}