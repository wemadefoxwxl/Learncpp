#include "stringUtil.h"

using std::string;

void stringUtil::LTrim(string& s)
{
	string drop = " \t";
	s.erase(0,s.find_first_not_of(drop));
}

void stringUtil::RTrim(string& s)
{
	string drop = " \t";
	s.erase(s.find_last_not_of(drop));
}

void stringUtil::Trim(string& s)
{
	LTrim(s);
	RTrim(s);
}