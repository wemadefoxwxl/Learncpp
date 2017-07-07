#include <iostream>
#include <list>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	std::vector<int>::iterator it;
	for(it = v.begin();it != v.end();++it)
		cout << *it  << " ";
	cout << endl;

	// 反向迭代器
	std::vector<int>::reverse_iterator ri;
	for(ri = v.rbegin();ri != v.rend();++ri)
		cout << *ri << " ";
	cout << endl;

	list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);

	list<int>::iterator it2;

	for(it2 = l.begin();it2 != l.end();++it2)
		cout << *it2 << " " ;
	cout << endl;

	return 0;
}