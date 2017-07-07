#include <iostream>

using std::cout;
using std::endl;

class Test
{
public:
	Test(int n) : n_(n)
	{
		cout << "Test " << n_ << "..." << endl;
	}

	~Test()
	{
		cout << "~Test " << n_ << "..." << endl;
	}
private:
	int n_;
};

// 未初始化的全局变量，初始值为0。
// n存储于.bss段(block started by symbol)
int n;
// 已初始化的全局变量，初始值为100。n2存储于.data段中。
int n2 = 100;

// 全局对象的构造优先于main函数
Test g(100);
static Test g2(200);


int main()
{
	cout << "Entering main..." << endl;

	// 栈上创建的对象，在生存期结束的时候自动释放。
	Test t(10);
	{
		Test t2(20);
	}

	{
		// 堆上创建的对象，要显示释放
		Test* t3 = new Test(30);
		delete t3;
	}

	{
		// n3存储于.bss段中(编译期初始化)
		static int n3;
		// n4存储于.data段中(编译期初始化)
		static int n4 = 100;

		// t4对象运行期初始化  .data段
		static Test t4(123);
	}

	cout << "Exiting main ... " << endl;
	return 0;
}