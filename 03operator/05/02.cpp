#include <iostream>

using std::cout;
using std::endl;

class DBHelper
{
public:
	DBHelper()
	{
		cout << "DB..." << endl;
	}

	~DBHelper()
	{
		cout << "~DB..." << endl;
	}

	void open() 
	{
		cout << "open..." << endl;
	}

	void query() 
	{
		cout << "query..." << endl;
	}

	void close()
	{
		cout << "close..." << endl;
	}

};

class DB
{
public:
	DB()
	{
		db_ = new DBHelper;
	}

	~DB()
	{
		delete db_;
	}

	DBHelper* operator->()
	{
		return db_;
	}

	DBHelper& operator*()
	{
		return *db_;
	}

private:
	DBHelper* db_;
};


int main()
{
	DB db;
	db->open();
	db->query();
	db->close();

	return 0;
}









