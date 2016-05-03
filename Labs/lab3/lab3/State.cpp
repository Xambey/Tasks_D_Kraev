#include "State.h"



State::State()
{
	Add();
}


State::~State()
{
}

void State::print()
{
	for (State* i = begin; i; i = i->next)
		i->Show();
}

void State::Add()
{
	next = NULL;
	if (!begin)
		begin = this;
	else {
		State* s = begin;

		while (s->next)
			s = (State*)s->next;
		s->next = this;
	}
}

