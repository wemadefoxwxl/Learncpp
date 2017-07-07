#ifndef _STACK_H_
#define _STACK_H_

namespace wl
{
class stack
{
private:
	class Node
	{
	public:
		int data_;
		Node* next_;
		Node(int data,Node* next):data_(data),next_(next)
		{}
	};

public:
	stack():head_(nullptr),size_(0)
	{

	}

	~stack()
	{
		Node* tmp;
		while(head_ != nullptr)
		{
			tmp = head_;
			head_ = head_->next_;
			delete tmp;
		}
		size_ = 0;
	}

	void push(int data)
	{
		head_ = new Node(data,head_);
		++size_;
	}

	bool empty() const
	{
		return size_ == 0;
	}

	bool pop(int& data)
	{
		if(empty())
			return false;
		Node* tmp = head_;
		data = tmp->data_;
		head_ = tmp->next_;
		--size_;
		delete tmp;
		return true;
	}

private:
	Node* head_;
	int size_;
};
}

#endif