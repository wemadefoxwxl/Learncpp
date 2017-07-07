#ifndef __COUNTOBJDECT_H_
#define __COUNTOBJDECT_H_

class CountObject
{
public:
	CountObject();
	~CountObject();
public:
	static int GetCount();
private:
	static int count_;	//静态成员的引用性声明
};

#endif