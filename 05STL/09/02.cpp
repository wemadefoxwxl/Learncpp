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

bool myGreater(int a,int b)
{
	return a > b;
}

int main()
{
	int a[] = {1,2,3,4,5,6};
	std::vector<int> v(std::begin(a),std::end(a));

	cout << "vector : ";
	for_each(v.begin(),v.end(),print_element);
	cout << endl;

	// 1.rotate的使用
	cout << "rotate : ";
	rotate(v.begin(),v.begin()+2,v.end());
	for_each(v.begin(),v.end(),print_element);
	cout << endl;

	// 2. sort的使用
	sort(v.begin(),v.end());
	cout << "sort : " ; 
	for_each(v.begin(),v.end(),print_element);
	cout << endl;

	// 3. sort的仿函数的使用
	sort(v.begin(),v.end(),myGreater);
	cout << "sort myGreater : ";
	for_each(v.begin(),v.end(),print_element);
	cout << endl;

	// 4. sort的函数对象的函数对象的使用
	// std::less 类模板
	sort(v.begin(),v.end(),std::less<int>());
	cout << "sort less : ";
	for_each(v.begin(),v.end(),print_element);
	cout << endl;

	sort(v.begin(),v.end(),std::greater<int>());
	cout << "sort greater : ";
	for_each(v.begin(),v.end(),print_element);
	cout << endl;

	return 0;
}