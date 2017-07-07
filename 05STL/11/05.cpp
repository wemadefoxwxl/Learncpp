#include <iostream>
#include <vector>
#include <functional>
#include <set>

using std::cout;
using std::endl;

int main()
{
	std::multiset<int,std::greater<int> > hashSet;
	hashSet.insert(3);
	hashSet.insert(3);
	hashSet.insert(2);
	hashSet.insert(1);
	hashSet.insert(3);

	for(std::multiset<int,std::greater<int> >::iterator it = hashSet.begin();it != hashSet.end();++it)
	{
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}