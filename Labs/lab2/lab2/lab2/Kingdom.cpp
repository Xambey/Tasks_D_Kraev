#include "Kingdom.h"

Kingdom::Kingdom()
{
}

Kingdom::Kingdom(string name)
{
	this->name = name;
	//this->Add();
}

Kingdom::Kingdom(const Kingdom & t)
{
	name = t.name;
}


Kingdom::~Kingdom()
{
}

void Kingdom::Show()
{
	cout << endl;
	cout << "Объект " << this << " название = " << name;
}

void Kingdom::Add()
{
	this->next = NULL;
	if (!begin) begin = this;
	else {
		Kingdom* t = (Kingdom*)begin;

		while (t->next) {

			t = (Kingdom*)t->next;
		}
		t->next = this;
	}
}
