#include <iostream>

using namespace std;

struct anstruct
{
	int uuid;
};


void test_ptr();
int main(void)
{
	test_ptr();
}



void test_ptr()
{
	anstruct stu;
	anstruct * struc = (&stu);


	cout << struc->uuid <<endl;
	
	stu.uuid = 10;

	cout << struc->uuid <<endl;

	cout << stu.uuid <<endl;



}
