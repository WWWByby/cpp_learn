
#include<iostream>
using namespace std;

void test_array_ptr()
{
	int * array = new int[3];
	array[0] = 0;
	array[1] = 4;

	array[2] = 8;

	cout <<"array:"<<*array <<array[0] <<endl;
	array = array +1;

	cout << "array:"<<*array << array[0] <<endl;
}


int main(void)
{
	test_array_ptr();	
	return 0;
}
