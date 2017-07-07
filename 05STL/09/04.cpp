#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>

using std::cout;
using std::endl;

void print_element(const int& n)
{
	cout << n << " ";
}

int mult(int a,int b)
{
	return a * b;
}

int main()
{
	int a[] = {1,2,3,4,5};

	std::vector<int> v(std::begin(a),std::end(a));

	for_each(v.begin(),v.end(),print_element);
	cout << endl;

	// 1. 累加
	cout << std::accumulate(v.begin(),v.end(),0) << endl;

	// 2. 累乘
	cout << std::accumulate(v.begin(),v.end(),1,mult) << endl;

	return 0;
}