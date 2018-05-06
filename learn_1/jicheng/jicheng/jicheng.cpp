// jicheng.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "BaseMonster.h"
#include <string>
#include <locale>
#include "Human.h"
#include "Giant.h"

using namespace std;

int main()
{
	string name = "azh";
	
	Giant monster(name);
	Human monster2("wjh");
	
	for (int i = 0; i < 10; i++)
	{
		monster.Attack(&monster2);
		monster2.Attack(&monster);
	}
    return 0;
}

