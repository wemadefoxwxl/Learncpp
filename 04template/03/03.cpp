#include <iostream>

using std::cout;
using std::endl; 

template <typename T>
class Myclass
{
public:
	Myclass(T val) : val_(val)
	{

	}

	template <class X>
	Myclass(const Myclass<X>& x) : val_(x.GetValue())
	{

	}

	template <class X>
	void Assign(const Myclass<X>& x)
	{
		val_ = x.GetValue();
	}

	T GetValue() const 
	{ 
		return val_; 
	}

private:
	T val_;
};

int main()
{
	Myclass<double> d(10.11);
	Myclass<int>	i(1);

	d.Assign(d);	//OK
	d.Assign(i);  //Error

	Myclass<int> m(d);

	return 0;
}