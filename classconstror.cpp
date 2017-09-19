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

    B's constructor.  // �����еĳ�Ա����Ĺ��캯��
	C's constructor.  // ����Ĺ��캯��
	A's constructor.  // ��������ݳ�Ա����Ĺ��캯��
	B's constructor. // ����ĳ�Ա����Ĺ��캯��
	D's constructor.// ����Ĺ��캯��

	D's destructor. // �������������
	B's destructor. // ����ĳ�Ա�������������
	A's destructor.// ����ĳ�Ա�������������
	C's destructor. // �������������
	B's constructor. // �����Ա�������������
*/