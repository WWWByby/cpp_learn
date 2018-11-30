#include <iostream>
#include <array>
#include <typeinfo>
using namespace std;

const int length = 100;
template<class T>
void print_array(T &  _begin,T &  _end);
int main()
{
	array<int, length> array_step = {};
	int i =0;
	while(i <length)
	{
		i++;
		array_step[i-1] = i;
	}
	cout << &array_step[length-1]<< "=====" << &array_step[0]<<endl;
	cout << typeid(&array_step[0]).name() <<endl;
	print_array(array_step[0],array_step[length-1]);
	return 0;
}

template<class T>
void print_array(T & _begin,T & _end)
{
	
	cout <<"要打印的数据类型" << typeid(&array_step[0]).name() <<endl;
	int len = (&_end -&_begin);
	T * head = &_begin;
	for(int i = 0;i<=len;i++)
	{
		cout << *(head+i)<<endl;
	}
}
