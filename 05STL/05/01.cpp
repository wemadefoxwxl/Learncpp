#include <vector>
#include "Test.h"

int main()
{
	std::vector<Test> v;
	Test t1;
	Test t2;
	Test t3;

	v.push_back(t1);
	v.push_back(t2);
	v.push_back(t3);

	return 0;
}