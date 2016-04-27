#include "Monarchy.h"

Monarchy::Monarchy()
{
}

Monarchy::Monarchy(string name)
{
	this->name = name;
}

Monarchy::Monarchy(const Monarchy & t)
{
	name = t.name;
}


Monarchy::~Monarchy()
{
}

void Monarchy::Show()
{
	cout << endl;
	cout << "Объект " << this << " название = " << name;
}

void Monarchy::Add()
{
	this->next = NULL;
	if (!begin) begin = this;
	else {
		Monarchy* t = (Monarchy*)begin;

		while (t->next) {

			t = (Monarchy*)t->next;
		}
		t->next = this;
	}
}
