#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::ostream;

#include "max.h"

class Test
{
public:
	Test(int a):a_(a)
	{

	}

	friend bool operator<(const Test& t1,const Test& t2)
	{
		return t1.a_ < t2.a_;
	}

	friend ostream& operator<<(ostream& out ,const Test& t)
	{
		out << t.a_;
		return out;
	}
private:
	int a_;
};

int main()
{	
	// 自动推导 max(const int&,const int&)
	cout << max(5.5,6.6) << endl;
	// 自动推导 max(const char&,const char&)
	cout << max('a','b') << endl;

	Test t1(1);
	Test t2(2);
	// 自动推导  max(const Test& ,const Test&)
	cout << ::max(t1,t2) << endl;
	cout << endl;

	const char* str1 = "aaaa";
	const char* str2 = "bbbb";
	// 非模板函数
	// const char* const& max(const char* const& a,const char* const& b)
	cout << ::max(str1,str2) << endl;
	cout << ::max("123","234") << endl;
	// 模板函数 模板特化
	cout << ::max<>(str1,str2) << endl;
	cout << endl;

	cout << ::max(1,5,3) << endl;
	cout << ::max('a',99) << endl;
	// max(const int&,const int&)
	cout << ::max(97,100) << endl;
	cout << endl;

	// 自动推导 max(const int&,const int&)
	cout << ::max<>(97,100) << endl;
	// 显示指定模板函数max(const int& ,const int&)
	cout << ::max<int>(97,100) << endl;
	// 显示指定模板函数max(const int& ,const int&)
	cout << ::max<int>('a',100) << endl;




	return 0;
}