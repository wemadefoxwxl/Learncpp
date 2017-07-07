#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;

void print_element(int n)
{
	cout << n << " ";
}

bool greater_than_3(int n)
{
	return n > 3;
}


int main()
{
	int a[] = {1,2,3,4,5};
	std::vector<int> v(std::begin(a),std::end(a));

	std::vector<int>::iterator it;
	for(it = v.begin();it != v.end();++it)
		cout << *it << " ";
	cout << endl;

	// 1. for_each 的使用
	cout << "for_each" << endl;
	for_each(v.begin(),v.end(),print_element);
	cout << endl;

	// 2. min_element 的使用
	it = min_element(v.begin(),v.end());
	if(it != v.end())
		cout << "the min_element is : " << *it << endl;

	// 3. max_element 的使用
	it = max_element(v.begin(),v.end());
	if(it != v.end())
		cout << "the max_element is : " << *it << endl;

	// 4. find的使用
	it = find(v.begin(),v.end(),3);
	if(it != v.end())
	{
		cout << "find 3 " << std::distance(v.begin(),it) << endl;
	}
	else
	{
		cout << "NOT FOUND 3" << endl;
	}

	// find_if的使用
	it = find_if(v.begin(), v.end(),greater_than_3);
	if(it != v.end())
	{
		cout << "greater_than_3  " << std::distance(v.begin(),it) << endl;
		cout << *it << endl;
	}
	else
	{
		cout << "NOT FOUND greater_than_3" << endl;
	}

	return 0;
}