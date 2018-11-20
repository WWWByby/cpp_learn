#include <iostream>
#include <cstring>
using namespace std;

void bubble_sort(int array[] , int length);
int main()
{
	int array[] = { 1,9,22,666,77,221,11,22,66,77,55,11,33,42,39,46,100,258, 	0}; 

	int len = sizeof(array)/ sizeof (array[0]);
	bubble_sort(array,len);

}

void print_array_info(const char desc[] ,int array[], int length )
{
	cout << desc <<endl;
	for(int i = 0;i < length;i++)
	{
		cout <<  array[i]<<"\t" ;
	}

	cout <<endl;
}



void bubble_sort(int array[] , int length)
{
	print_array_info("未排序前的数组:",array , length);
	int count = 0;
	int flag = 0;
	for(int i = 0 ; i <length; i++)
	{
		flag = 0;
		for(int j = i; j < length ; j++)
		{ 
			if(i != j&& array[i] > array[j])				
			{
				int tmp = array[i];
				array[i] = array[j];	
				array[j] = tmp;
				flag = 1;
			}
			count++;
		}
		if(flag == 0)
		{
			cout << "外层循环:" << i << "\t一共循环："<< count<<"\t数组长度："<<length <<endl;
			break;
		}

		print_array_info("交换后的数组",array,length);
	}

	cout << "循环了:"<< count << endl;
}

