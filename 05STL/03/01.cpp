#include <map>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::map;

int main()
{

	// 插入到map容器内部的元素默认是按照key从小到大的顺序来排序的。
	// key类型一定要重载<运算符
	map<string,int> mapTest;

	// int& operator[](const size_t index)
	mapTest["aaa"] = 100;
	mapTest["eee"] = 500;
	mapTest["eee"] = 300;
	mapTest.insert(map<string,int>::value_type("bbb",200));
	mapTest.insert(map<string,int>::value_type("bbb",123));
	mapTest.insert(std::pair<string,int>("ccc",300));
	mapTest.insert(std::pair<string,int>("ccc",3000));
	mapTest.insert(std::make_pair("ddd",400));
	mapTest.insert(std::make_pair("ddd",4000));

	map<string,int>::const_iterator it;
	for(it = mapTest.begin();it != mapTest.end();++it)
	{
		cout << it->first << "  " << it->second << endl;
	}


	return 0;
}