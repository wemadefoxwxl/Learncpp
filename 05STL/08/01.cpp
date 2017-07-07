#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using std::cout;
using std::endl;

void print_element(int n)
{
	cout << n << " ";
}

void add_3(int& n)
{
	n += 3;
}

int main()
{
	int a[] = {1,2,3,4,5};
	std::vector<int> v(std::begin(a),std::end(a));
	std::list<int>  l(15);

	for_each(v.begin(),v.end(),print_element);
	cout << endl;

	// 1.for_each的使用
	for_each(v.begin(),v.end(),add_3);
	for_each(v.begin(),v.end(),print_element);
	cout << endl;

	cout << "LIST" << endl;
	for_each(l.begin(),l.end(),print_element);
	cout << endl;

	// 2. copy的使用
	copy(v.begin(),v.end(),l.begin());
	cout << "copy Done" << endl;
	for_each(l.begin(),l.end(),print_element);
	cout << endl;

	// 3. copy_backward的使用
	copy_backward(v.begin(), v.end(),l.end());
	for_each(l.begin(),l.end(),print_element);
	cout << endl;


	return 0;
}