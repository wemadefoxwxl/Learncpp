#include "CountObject.h"

// 静态数据成员的定义性声明
int CountObject::count_ = 0; 

CountObject::CountObject()
{
	++count_;
}

CountObject::~CountObject()
{
	--count_;
}

int CountObject::GetCount()
{
	return count_;
}