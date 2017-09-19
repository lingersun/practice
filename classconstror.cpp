#include <iostream>

class A
{
public:
	A()
	{
		::std::cout <<"\tA's constructor." <<::std::endl;
	}

	~A()
	{
		::std::cout <<"\tA's destructor." <<::std::endl;
	}
};

class B
{
public:
	B()
	{
		::std::cout <<"\tB's constructor." <<::std::endl;
	}
	~B()
	{
		::std::cout <<"\tB's destructor." <<::std::endl;
	}
};

class C
{
private:
	B bdata;

public:
	C()
	{
		::std::cout << "\tC's constructor." << ::std::endl;
	}

	~C()
	{
		::std::cout <<"\tC's destructor." << ::std::endl;
	}
};

class D : public C
{
public:
	D()
	{
		::std::cout <<"\tD's constructor." <<::std::endl;
	}

	~D()
	{
		::std::cout <<"\tD's destructor." <<::std::endl;
	}
private:
	A adata;
	B bdata2;
};

int main()
{
	D ddata;

	return 0;
}
/* output 

    B's constructor.  // 父类中的成员对象的构造函数
	C's constructor.  // 父类的构造函数
	A's constructor.  // 子类的数据成员对象的构造函数
	B's constructor. // 子类的成员对象的构造函数
	D's constructor.// 子类的构造函数

	D's destructor. // 子类的析构函数
	B's destructor. // 子类的成员对象的析构函数
	A's destructor.// 子类的成员对象的析构函数
	C's destructor. // 父类的析构函数
	B's constructor. // 父类成员对象的析构函数
*/