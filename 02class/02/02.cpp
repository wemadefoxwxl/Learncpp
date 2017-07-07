#include <iostream>

using std::cout;
using std::endl;

struct Test2
{
	// 默认是public权限
	int x_;
	int y_;
	int z_;

	void Init(int x,int y,int z)
	{
		x_ = x;
		y_ = y;
		z_ = z;
	}

	void Display()
	{
		cout << "x = " << x_ << "  y = " << y_ << "  z = " << z_ << endl;
	}
};

// 默认是private权限
class Test3
{
public:
	int x_;
	int y_;
	int z_;

	void Init(int x,int y,int z)
	{
		x_ = x;
		y_ = y;
		z_ = z;
	}

	void Display()
	{
		cout << "x = " << x_ << "  y = " << y_ << "  z = " << z_ << endl;
	}
};


int main()
{
	Test2 t;
	t.Init(10,20,30);
	t.Display();

	// 列表初始化
	Test2 t2 = {10,20,30};
	t2.Display();

	Test3 t3;
	t3.Init(1,2,3);
	t3.Display();

	Test3 t4 = {10,20,30};
	t4.Display();

	// 列表初始化
	Test3 t5{3,4,5};
	t5.Display();

	return 0;
}















