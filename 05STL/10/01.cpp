#include <iostream>

using std::cout;
using std::endl;

class FunObj
{
public:
	void operator()()
	{
		cout << "hello " << endl;
	}

	void operator()(int n)
	{
		cout << "hello2 " << n << endl;
	}
};

int main()
{
	FunObj obj;
	obj();
	obj(1);

	FunObj()();

	return 0;
}