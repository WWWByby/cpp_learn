#ifndef UNITILY_H
#define UNITILY_H
#include <iostream>
void print_array_info(const char desc[] ,int array[], int length )
{
	std::cout << desc <<std::endl;
	for(int i = 0;i < length;i++)
	{
		std::cout <<  array[i]<<"\t" ;
	}

	std::cout <<std::endl;
}



#endif
