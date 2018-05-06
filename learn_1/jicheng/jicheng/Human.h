#pragma once
#include "BaseMonster.h"
#include <string>
using namespace std;

class Human :public BaseMonster
{
private :

	uint16_t atk;
	int mp;

public:
	Human(string _name);
	~Human();
	virtual void Hert(BaseMonster *target);
	virtual void Attack(BaseMonster *target);

	virtual void Dead();

	virtual void Born();
};

