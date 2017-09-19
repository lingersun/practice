#include <iostream>


void f(char array[])
{
	::std::cout <<sizeof(array)<<::std::endl;
	::std::cout <<strlen(array)<<::std::endl;
}
int main()
{
	char array[] = "teststring";
	f(array);
	::std::cout <<sizeof(array)<<::std::endl;
	::std::cout <<strlen(array)<<::std::endl;

	return 0;
}

/*
4
10
11
10
*/