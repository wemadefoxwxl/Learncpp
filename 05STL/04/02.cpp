#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main()
{	
	std::vector<int> v;

	// reserve只是预分配空间，并没有增大size的大小
	v.reserve(10000);
	cout << "capacity : " << v.capacity() << endl;
	cout << "size     : " << v.size() << endl;
	cout << endl;

	std::vector<int> vec;
	// resize直接分配空间并且直接插入元素，所以size也会改变
	vec.resize(2000);
	cout << "capacity : " << vec.capacity() << endl;
	cout << "size     : " << vec.size() << endl;
	cout << vec[100] << endl;


	return 0;
}