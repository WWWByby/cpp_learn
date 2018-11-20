#include <iostream>
#include "../include/unitily.h"
using std::cout;
using std::endl;
void quick_sort(int array[] , int length,int start, int end);

int main( void )
{
	int array[] = {100,15,30,8,2,10005,963,15,60,10};
	int length = sizeof(array) / sizeof (array[0]);
	quick_sort(array ,length, 0 ,length );

	print_array_info("排序完的数组",array , 10);
}

void quick_sort(int array[] , int length ,int start, int end)
{
	if(start >= end)
	{
		cout << "该序列已排完"<<endl;
		return ;
	}
	print_array_info("数组",array , length);	
	int center = 0;
	for(int i = start,j = end -1 ;;)
	{
		if ( array[i] < array[j]  )
		{
			i ++ ;
		}
		else
		{
			j --;
		}
		if( i == j)
		{
			center = i;
			break;
		}
	}
	quick_sort(array,length , start,center);
	quick_sort(array,length,center+1,end);
	
}	
