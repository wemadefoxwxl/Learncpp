#ifndef _STACK_H_
#define _STACK_H_

#include <exception>
#include <deque>

using std::deque;

namespace wl
{

template <typename T,typename CONT = deque<T> >
class Stack
{
public:
	Stack() :top_(-1)
	{

	}

	~Stack()
	{

	}

	void push(const T& elem)
	{
		c.push_back(elem);
		++top_;
	}

	void pop()
	{
		if(-1 == top_)
			throw std::out_of_range("stack empty");
		c.pop_back();
		--top_;
	}

	T& top()
	{
		if(-1 == top_)
			throw std::out_of_range("stack empty");
		return c[top_];
	}

	const T& top() const
	{
		if(-1 == top_)
			throw std::out_of_range("stack empty");
		return c[top_];
	}

	bool empty() const
	{
		return c.empty();
	}

	int size() const
	{
		return c.size();
	}

private:
	CONT c;
	int top_;
};


}

#endif