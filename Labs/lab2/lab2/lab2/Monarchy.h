#pragma once
#include "State.h"
class Monarchy : public State
{
public:
	Monarchy();
	Monarchy(string name);
	Monarchy(const Monarchy& t);
	~Monarchy();
	void Show();
	void Add();
};

