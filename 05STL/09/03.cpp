#include <iostream>
#include <list>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;

void print_element(const int& n)
{
	cout << n << " ";
}

int main()
{	
	int a[] = { 1, 10, 10, 14, 15, 16 };
	std::vector<int> v(std::begin(a),std::end(a));

	for_each(v.begin(),v.end(),print_element);
	cout << endl;

	std::vector<int>::iterator it;
	it = lower_bound(v.begin(),v.end(),10);
	if( it != v.end())
	{
		cout << std::distance(v.begin(),it) << endl;
	}

	it = upper_bound(v.begin(),v.end(),10);
	if(it != v.end())
	{
		cout << std::distance(v.begin(),it) << endl;
	}


	return 0;
}