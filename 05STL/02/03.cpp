#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;

void showVec(const std::vector<int>& v)
{
	std::vector<int>::const_iterator it = v.begin();
	while(it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}


int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);

	showVec(v);

	std::vector<int>::iterator it;
	for(it = v.begin();it != v.end();)
	{
		if(3 == *it)
			// erase返回的是当前删除元素的下一个元素
			it = v.erase(it);
		else
			++it;
	}

	showVec(v);

	return 0;
}