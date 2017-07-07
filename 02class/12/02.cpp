#include <iostream>
#include <cassert>
#include "stack.h"

using std::cout;
using std::endl;


// c++ 的好处
// 1.避免了名字的冲突
// 2.类型的扩充
// 3.数据封装，能够保护内部的数据结构不遭受外界的破坏

int main()
{
	using namespace wl;
	wl::stack stack;
	for (int i = 0; i < 10; ++i)
	{
		stack.push(i);
	}

	int tmp = 0;
	while(!stack.empty())
	{
		stack.pop(tmp);
		cout << tmp << endl;
	}
	cout << endl;

	return 0;
}