#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

void showVec(const std::vector<int> v)
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
	v.push_back(6);
	

	showVec(v);

	// erase
	v.erase(remove(v.begin(),v.end(),3),v.end());
	showVec(v);


	return 0;
}