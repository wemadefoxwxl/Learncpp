#ifndef _MyString_H_
#define _MyString_H_ 

class MyString
{
public:
	MyString(char* str = "");
	~MyString();
	MyString(const MyString& other);
	MyString& operator=(const MyString& other);

	void Display();
private:
	char* allocAndcpy(char* str);
	char* str_;
};
#endif