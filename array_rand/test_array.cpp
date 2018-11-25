#include <iostream>
#include "../include/unitily.h"
#define ARRAY_LENGTH 10
#define ARRAY_DESC "初始化数组所有元素"
void init_array()
{
	int source[ARRAY_LENGTH];
	for(int i = 0; i < ARRAY_LENGTH ; i++ )
	{
		source[i] = rand() % ARRAY_LENGTH ;
	}
	print_array_info("desc", source,ARRAY_LENGTH);
}

void init_array2()
{
	//初始化数组中元素为0
	int f_array[ARRAY_LENGTH] = {};
	print_array_info(ARRAY_DESC,f_array,ARRAY_LENGTH);
}

void init_array3()
{
	int i_array[ARRAY_LENGTH] {};

	print_array_info(ARRAY_DESC,i_array ,ARRAY_LENGTH);
}


void char_array_1()
{
	//char数组打印时遇到空字符时会停止？
	using namespace std;
	//char数组中不能有 ''的字符
	//char dog[] = { 'a' , 'b', 'c' , '', 'd', 'e'};
	
	//只会打印'abc'
	char dog[] = { 'a' , 'b','c' ,'\0','e' };
	cout << dog <<endl;

	char cat[] = "asss";
	//数组长度是5 证明用字符串初始化char数组时会计算\0
	cout <<cat <<sizeof(cat) <<sizeof(cat[0])<<endl;
	
	//测试未初始化的char数组元素是否为\0

	char fish[10] = "fish";

	for(int i = 0; i < 10; i++)
	{
		if(fish[i] != '\0')
		{
			cout << fish[i] <<endl;
		}
		else
		{
			cout << "空字符\t" << i <<endl;
		}
	}
	//验证结果是空字符
}
int main(void)
{
	//init array func 1i

	//init_array();

	//init_array2();

	//init_array3();
	char_array_1();
}	
