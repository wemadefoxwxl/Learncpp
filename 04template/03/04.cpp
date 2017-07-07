
template <typename T>
class MyClass
{
private:
	// 代表SubType是一个数据类型
	typename T::SubType* ptr_;
};

class Test
{
public:
	typedef int SubType;
};

int main(void)
{
	MyClass<Test> mc;
	return 0;
}