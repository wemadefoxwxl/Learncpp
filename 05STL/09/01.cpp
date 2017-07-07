#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using std::cout;
using std::endl;

void print_elemet(int n)
{
	cout << n <<" ";
}

int main()
{
	int a[] = {1,3,2,3,4,5};
	std::vector<int> v(std::begin(a),std::end(a));

	std::for_each(v.begin(),v.end(),print_elemet);
	cout << endl;

	auto it = std::remove(v.begin(),v.end(),3);
	cout << "without it : " ;
	std::for_each(v.begin(),v.end(),print_elemet);
	cout << endl;

	cout << "with it : ";
	std::for_each(v.begin(),it,print_elemet);
	cout << endl;


	return 0;
}