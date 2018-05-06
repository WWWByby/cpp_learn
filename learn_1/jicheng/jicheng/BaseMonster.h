#pragma once

#include <string>

using namespace std;
class BaseMonster
{
protected:
	string name;
	int hp;
public:
	BaseMonster(string _name);
	~BaseMonster();
	virtual void Hert(BaseMonster *target);
	virtual void Attack(BaseMonster *target);

	virtual void Dead();

	virtual void Born();

	string GetName();
};

