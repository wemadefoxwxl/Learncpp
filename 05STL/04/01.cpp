#include <iostream>
#include <vector>

using std::cout;
using std::endl;

// g++中vector的内存的增长是按照2倍怎长得
int main()
{
	std::vector<int> v;

	v.push_back(1);
	cout << v.capacity() << endl;
	v.push_back(1);
	cout << v.capacity() << endl;
	v.push_back(1);
	cout << v.capacity() << endl;
	v.push_back(1);
	cout << v.capacity() << endl;
	v.push_back(1);
	cout << v.capacity() << endl;
	v.push_back(1);
	cout << v.capacity() << endl;
	v.push_back(1);
	cout << v.capacity() << endl;
	v.push_back(1);
	cout << v.capacity() << endl;
	v.push_back(1);
	cout << v.capacity() << endl;

	return 0;
}