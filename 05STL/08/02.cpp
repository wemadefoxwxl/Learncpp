#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using std::cout;
using std::endl;

void print_element(int n)
{
	cout << n << " ";
}

int fun(int a)
{
	return 2 * a;
}

int fun2(int a,int b)
{
	return a + b;
}

int main()
{	
	int a[] = {1,2,3,4,5,6};
	std::vector<int> v(std::begin(a),std::end(a));

	std::list<int> l(6);
	std::list<int> l2(3);

	// 1. transform的第一种用法
	std::transform(v.begin(),v.end(),l.begin(),fun);
	cout << "list1" << endl;
	std::for_each(l.begin(),l.end(),print_element);
	cout << endl;

	// 2. transform的第二种用法
	std::transform(v.begin(),v.begin()+3,v.begin()+3,l2.begin(),fun2);
	cout << "list2" << endl;
	std::for_each(l2.begin(),l2.end(),print_element);
	cout << endl;



	return 0;
}