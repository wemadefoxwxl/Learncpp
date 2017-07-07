#include <iostream>

using std::cout;
using std::endl;

class Test
{
public:
	Test(int x):x_(x),outputTimes_(0)
	{

	}

	int GetX() const
	{
		cout << "const GetX...." << endl;
		return x_;
	}

	int GetX()
	{
		cout << "GetX..." << endl;
		return x_;
	}

	void Output() const
	{
		cout << "x = " << x_ << endl;
		++outputTimes_;
	}

	int GetOutputTimes() const
	{
		return outputTimes_;
	}
private:
	int x_;
	mutable int outputTimes_;
};

int main()
{	
	// 调用const
	const Test t(10);
	t.GetX();

	Test t2(20);
	t2.GetX();

	t.Output();
	t.Output();
	cout << t.GetOutputTimes() << endl;

	return 0;
}













