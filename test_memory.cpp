#include <iostream>


char * getMemory()
{
	char *p = "hello world"; //hello world 保存在静态存储区
	return p;
}

char * getMemory2()
{
	char array[] = "hello world"; // hello world 保存在栈区
	return array;
}



int main()
{
	char * str1 = NULL;
	str1 = getMemory(); // 正常输出hello world
	::std::cout << str1 <<::std::endl;
	char *str2 = NULL;
	str2 = getMemory2(); // 乱码
	::std::cout << str2 <<::std::endl;

	return 0;
}
