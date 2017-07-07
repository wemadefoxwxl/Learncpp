#include <iostream>

using std::cout;
using std::endl;

class Test
{
public:
	int num_;
};

// num_ = 20;		//ERROR，num_的作用域在类内部
int num_ = 20;
// num_的作用域是文件作用域，与类中的num_是不同的作用域

int add(int a,int b);	//a,b两个标识符的作用域为函数原型作用

int main()
{
	int num_ = 30;		//num_为块作用域
	{
		int num_ = 100;	//num_为块作用域
	}

	cout << num_ << endl;
	cout << ::num_ << endl;


	return 0;
}

int add(int a,int b)		//形参a和b也算是块作用域
{
	return a + b;
}