#include <iostream>
#include "State.h"
#include "Kingdom.h"
#include "Republic.h"
#include "Monarchy.h"
#include <clocale>

State* State::begin = NULL;
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	Kingdom obj("UK");
	Monarchy obj2("ENG");
	Monarchy obj3("Japan");
	Republic obj4("RUS");

	State::print();

	State* abs = new Kingdom("Something");
	obj2 = obj3;
	obj2.Show();

	State::print();

	cout << endl;
	system("pause");
	return 0;
}