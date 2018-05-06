#pragma once
#include "BaseMonster.h"
#include <string>
using namespace std;
class Giant :public BaseMonster
{
public:
	Giant(string _name);
	~Giant();
	virtual void Born();
	virtual void Attack(BaseMonster *target);
	virtual void Hert(BaseMonster *target);
};

