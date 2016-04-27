#include "Republic.h"

Republic::Republic()
{
}

Republic::Republic(string name)
{
	this->name = name;
	//this->Add();
}

Republic::Republic(const Republic & t)
{
	name = t.name;
}


Republic::~Republic()
{
}

void Republic::Show()
{
	cout << endl;
	cout << "Объект " << this << " название = " << name;
}

void Republic::Add()
{
	this->next = NULL;
	if (!begin) begin = this;
	else {
		Republic* t = (Republic*)begin;

		while (t->next) {

			t = (Republic*)t->next;
		}
		t->next = this;
	}
}
