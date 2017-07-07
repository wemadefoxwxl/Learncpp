#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;

void printFun(const int& n)
{
	cout << n << " "
}

void Add3(int& n)
{
	n +=3;
}

class PrintObj
{
public:
	void operator()(int n)
	{
		cout << n << "  ";
	}
};

class AddObj
{
public:
	AddObj(int number) : number_(number)
	{

	}

	void operator()(int& n)
	{
		n += number_;
	}
private:
	int number_;
};

class GreaterObj
{
public:
	GreaterObj(int number) : number_(number)
	{

	}

	bool operator()(int n)
	{
		return n > number_;
	}
private:
	int number_;
};



int main()
{
	int a[] = {1,2,3,4,5,6};
	std::vector<int> v(std::begin(a),std::end(a));

	for_each(v.begin(),v.end(),printFun);
	cout << endl;

	for_each(v.begin(),v.end(),PrintObj());
	cout << endl;

	for_each(v.begin(),v.end(),Add3);
	for_each(v.begin(),v.end(),PrintObj());
	cout << endl;
	cout << endl;

	// ()为构造函数的()
	for_each(v.begin(),v.end(),AddObj(5));
	for_each(v.begin(),v.end(),PrintObj());
	cout << endl;

	cout << count_if(v.begin(),v.end(),GreaterObj(3)) << endl;


	return 0;
}

















