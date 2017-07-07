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

bool fun(int a)
{
	return a < 10;
}

int main()
{
	int a[] = {1,2,3,4,3,2,1};

	std::vector<int> v(std::begin(a),std::end(a));
	std::list<int> l(7);

	// 1. replace 的用法
	std::replace(v.begin(),v.end(),3,300);
	cout << "vector : ";
	std::for_each(v.begin(),v.end(),print_element);
	cout << endl;

	// 2. replace_copy的用法
	std::replace_copy(v.begin(),v.end(),l.begin(),300,99);
	cout << "list : ";
	std::for_each(l.begin(),l.end(),print_element);
	cout << endl;

	cout << "vector : ";
	std::for_each(v.begin(),v.end(),print_element);
	cout << endl;

	// 3. replace_copy_if
	std::replace_copy_if(v.begin(), v.end(), l.begin(), fun, 0);
	cout << "list : ";
	std::for_each(l.begin(), l.end(), print_element);
	cout<<endl;



	return 0;
}