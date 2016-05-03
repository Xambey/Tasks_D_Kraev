#pragma once
#include "State.h"
class Republic : public State
{
public:
	Republic();
	Republic(string name);
	Republic(const Republic& t);
	~Republic();
	void Show();
	void Add();
};

