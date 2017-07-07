#ifndef _STACK2_H_
#define _STACK2_H_

#include <exception>

namespace wl2
{
template <typename T,int MAXSIZE = 10>
class Stack
{
public:
	explicit Stack();
	~Stack();

	void push(const T& elem);
	void pop();
	T& top();
	const T& top() const;
	bool empty() const;
	int size() const;
private:
	T* elems_;
	int top_;
};

template <typename T,int MAXSIZE>
Stack<T,MAXSIZE>::Stack() :top_(-1)
{
	elems_ = new T[MAXSIZE];
}

template <typename T,int MAXSIZE>
Stack<T,MAXSIZE>::~Stack()
{
	delete[] elems_;
}

template <typename T,int MAXSIZE>
void Stack<T,MAXSIZE>::push(const T& elem)
{
	if(top_ + 1 == MAXSIZE)
		throw std::out_of_range("Stack full");
	elems_[++top_] = elem;
}

template <typename T,int MAXSIZE>
void Stack<T,MAXSIZE>::pop()
{
	if(-1 == top_)
		throw std::out_of_range("Stack empty");
	--top_;
}

template <typename T,int MAXSIZE>
T& Stack<T,MAXSIZE>::top()
{
	if(-1 == top_)
		throw std::out_of_range("Stack empty");
	return elems_[top_];
}	

template <typename T,int MAXSIZE>
const T& Stack<T,MAXSIZE>::top() const
{
	if(-1 == top_)
		throw std::out_of_range("Stack empty");
	return elems_[top_];
}

template <typename T,int MAXSIZE>
bool Stack<T,MAXSIZE>::empty() const
{
	return -1 == top_;
}

template <typename T,int MAXSIZE>
int Stack<T,MAXSIZE>::size() const
{
	return top_ + 1;
}


}

#endif