#include <iostream>

using std::cout;
using std::endl;

class Outer
{
public:
	// Inner为嵌套类(内部类)
	class Inner
	{
	public:
		void fun();
	};

public:
	Inner obj_;
	void fun()
	{
		cout << "Outer::Fun() " << endl;
		obj_.fun();
	}
};

void Outer::Inner::fun()
{
	cout << "Inner::FUN()" << endl;
}

// 局部类,只能在函数内部使用
void Fun()
{
	class LocalClass
	{
	public:
		int num_;

		void Init(int num)
		{
			num_ = num;
		}

		void Display()
		{
			cout <<"num : " << num_ << endl;
		}
	};

	LocalClass lc;
	lc.Init(10);
	lc.Display();
}


int main(int argc, char const *argv[])
{
	Outer outer;
	outer.fun();

	Outer::Inner i;
	i.fun();

	Fun();
	// LocalClass lc; //ERROR ,局部类只能在定义在它的函数体中使用
	return 0;
}













