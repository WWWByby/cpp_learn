#include <iostream>

using namespace std;


//取地址运算符&

void test_address()
{
	int * num  = new int ;

	cout << "int 类型未初始化时 地址："<< &num <<endl;

	*num = 10;
	cout << "int 类型初始化时 地址："<< &num <<endl;

}

int main(void)
{
	test_address();	

}
