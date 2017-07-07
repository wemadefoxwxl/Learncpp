#include <iostream>

using std::cout;
using std::endl;

// const成员的初始化只能在构造函数初始化列表中进行
// 引用成员的初始化也只能在构造函数初始化列表中进行
// 对象成员(对象所对应的类没有默认构造函数)的初始化，也只能在构造函数初始化列表中进行
class Object
{
public:
	enum E_TYPE
	{
		TYPE_A = 100,
		TYPE_B = 200,
	};

public:
	Object(int num)
		:num_(num),kNum(num_),refNum(num_)
		{
			cout << "Object() " << num_ << " ... " << endl;
		}

	~Object()
	{
		cout << "~Object() " << num_ << endl;
	}

	void DisplayKNum()
	{
		cout << "kNum = " << kNum << endl;
	}
private:
	int num_;
	const int kNum;
	int& refNum;
};

int main()
{
	Object obj1(10);
	Object obj2(20);
	obj1.DisplayKNum();
	obj2.DisplayKNum();

	cout << obj1.TYPE_A << endl;
	cout << obj2.TYPE_B << endl;
	cout << Object::TYPE_B << endl;

	return 0;
}














