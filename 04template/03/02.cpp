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

	void Assign(const Myclass<T>& X)
	{
		val_ = X.val_;
	}

private:
	T val_;
};

int main()
{
	Myclass<double> d(10.11);
	Myclass<int>	i(1);

	d.Assign(d);	//OK
	// d.Assign(i);  //Error

	return 0;
}