#pragma once

#include "State.h"

class Kingdom : public State
{
public:
	Kingdom();
	Kingdom(string name);
	Kingdom(const Kingdom& t);
	~Kingdom();
	void Show();
	void Add();
};

