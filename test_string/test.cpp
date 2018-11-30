#include <iostream>
#include <cstring>
int main(void)
{
	using namespace std;
	
	string name1 = { "aaaa"} ;

	char charr[20];
	
	cout << "字符数组长度:"<< strlen(charr) << endl;

	string name2 = name1;	
	cout << "name1:"  << name1 <<"\n" << &name1 << endl;
	cout << "name2:"  <<  name2 << "\n" << &name2 << "长度:" << name2.length() << endl;
	for(int i = 0; i < name2.length(); i++)
	{
		cout << name2[i] <<endl;
	}
	string name3 = name1+name2;
	cout << " name3 :  "<< name3 <<endl;
		
}
