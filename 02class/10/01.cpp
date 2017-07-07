#include <iostream>

using std::cout;
using std::endl;

class Date
{
public:
	Date(int year):year_(year)
	{

	}

	static bool IsLeapYear(int year)
	{
		return (year % 4 == 0 && year % 100 != 0) || (year % 400 ==0);
	}

	bool IsLeapYear()
	{
		return (year_ % 4 == 0 && year_ % 100 != 0) || (year_ % 400 ==0);
	}

private:
	int year_;
};


int main()
{
	Date d(2017);
	cout << std::boolalpha <<d.IsLeapYear() << endl;

	// 静态成员函数不需要构造对象就可以访问
	cout << std::boolalpha << Date::IsLeapYear(2016) << endl;

	return 0;
}