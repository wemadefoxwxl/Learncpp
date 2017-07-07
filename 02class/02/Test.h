#ifndef _TEST_H
#define _TEST_H

class Test
{
public:
	void Init(int x = 0,int y = 0, int z = 0);

	void Display();
	int Add(int a,int b)
	{
		return a + b;
	}
private:
	int x_;
	int y_;
	int z_;
};


#endif