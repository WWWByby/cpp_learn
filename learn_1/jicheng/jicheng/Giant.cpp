#include "stdafx.h"
#include "Giant.h"
#include "Human.h"
#include <iostream>
#include <string>




Giant::Giant(string _name) :BaseMonster(_name)
{
	this->Born();
}

Giant::~Giant()
{
}

void Giant::Born()
{
	printf("Giant  %s  is born \n", this->name.c_str());
}

void Giant::Attack(BaseMonster * target)
{

	printf("%s  ¹¥»÷ÁË  %s \n", name.c_str(), target->GetName().c_str());
	target->Hert(this);
}

void Giant::Hert(BaseMonster * target)
{
}
