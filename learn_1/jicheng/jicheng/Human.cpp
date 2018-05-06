#include "stdafx.h"
#include "Human.h"
#include <iostream>
#include <string>

using namespace std;


Human::Human(string _name) :BaseMonster(_name)
{

	Born();
}

Human::~Human()
{

}

void Human::Hert(BaseMonster * target)
{

}

void Human::Attack(BaseMonster * target)
{

	printf("%s  ¹¥»÷ÁË  %s \n", name.c_str(), target->GetName().c_str());
	target->Hert(this);
}

void Human::Dead()
{
}

void Human::Born()
{
	hp = 100;
	mp = 100;
	atk = 5;
	printf("%s  human is born \n", this->name.c_str());

	printf("attribute hp is %d  mp is %d ¹¥»÷Á¦ is %d  \n", hp, mp, atk);
}
