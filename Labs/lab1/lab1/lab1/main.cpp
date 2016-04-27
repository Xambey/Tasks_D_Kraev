#include <iostream>
#include <clocale>
#include "Сountry.h"

#define USA 9857000
#define RUSSIA 17100000
#define JAPAN 377944
#define KNR 9597000

int main()
{
	setlocale(LC_ALL, "RUS");

	Country obj1("USA", "Федеративная республика", USA);
	Country obj2("Russia", "Республика", RUSSIA);
	Country obj3("Japan", "Конституционная монархия", JAPAN);

	Country obj4;

	obj1.print();
	obj2.print();
	obj3.print();
	obj4.print();

	Country obj5(obj2);
	obj4 = obj3;

	obj4.print();
	obj5.print();

	obj1.obj = &obj2;
	obj1.obj->print();

	obj2.set("China", "Республика", KNR);
	obj2.print();

	obj1.~Country();
	obj2.~Country();
	obj3.~Country();
	obj4.~Country();
	obj5.~Country();
	
	system("pause");

	return 0;
}