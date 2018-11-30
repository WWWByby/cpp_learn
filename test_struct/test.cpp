#include <iostream>
using namespace std;
struct manStrct
{
	std::string name;

	int price;
	
	manStrct()
	{
		name = "未初始化";
		price = 0;
	}
	manStrct(string _name)
	{
		name = _name;
		price = 0;
	}
	manStrct(string _name,int price)
	{
		name = _name;

		this->price = price;
	}
	friend ostream & operator<< (ostream &out ,manStrct  &str)
	{
		out << "名字：" << str.name << "price："<<str.price << std::endl;
		return out ;
	}
};



void test_struct()
{
	std::cout << "测试结构体" << std::endl;
	manStrct man = {"test",100};
	
	cout << man <<endl;

	man.name = "我是测试体";

	man.price = 100;
	
	std::cout << man <<std::endl;
}

int main(void)
{
	test_struct();
	return 0;
}
