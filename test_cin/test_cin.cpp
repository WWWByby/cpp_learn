#include <iostream>
using namespace std;

int main(void)
{
	const int max_file_count = 80;
	char input_file[max_file_count];
	cin.getline(input_file,max_file_count);	
	char two_input_file[max_file_count];

	cin.getline(two_input_file,max_file_count);
	cout <<"\n第一次输入: " << input_file  <<endl;
	cout <<"\n第二次输入: " << two_input_file  <<endl;
}
