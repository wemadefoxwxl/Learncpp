#ifndef _STACK_H_
#define _STACK_H_

#include <exception>

namespace wl
{

template <typename T>
class Stack
{
public:
	explicit Stack(int maxSize) : maxSize_(maxSize),top_(-1)
	{
		elems_ = new T[maxSize_];
	}

	~Stack()
	{
		delete[] elems_;
	}

	void push(const T& elem)
	{
		if(top_ + 1 == maxSize_)
			throw std::out_of_range("Stack Full ...") ;
		elems_[++top_] = elem;
	}

	void pop()
	{
		if(-1 == top_)
			throw std::out_of_range("Stack empty...");
		--top_;
	}

	T& top()
	{
		if(-1 == top_)
			throw std::out_of_range("Stack empty...");
		return elems_[top_];
	}

	const T& top() const
	{
		if(-1 == top_)
			throw std::out_of_range("Stack empty...");
		return elems_[top_];

	}

	bool empty() const
	{
		return -1 == top_;
	}

private:
	T* elems_;
	int maxSize_;
	int top_;
};

}

#endif 