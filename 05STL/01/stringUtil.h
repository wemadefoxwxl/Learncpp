#ifndef _STRINGUTIL_H_
#define _STRINGUTIL_H_

#include <string>
using std::string;

class stringUtil
{
public:
	// 依赖关系
	static void LTrim(string& s);
	static void RTrim(string& s);
	static void Trim(string& s);
};

#endif