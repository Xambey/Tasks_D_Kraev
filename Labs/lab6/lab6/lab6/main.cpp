#include <iostream>
#include "Complex.h"
#include "list.h"
#include "Ñountry.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	List<int> obj;
	List<int> obj2;

	cout << "Type int" << endl;
	obj.input(3);
	obj.print();

	obj2.input(4);
	obj2.print();

	if (obj != obj2) cout << &obj << " != " << &obj2 << endl;
	else
		cout << &obj << " = " << &obj2 << endl;

	List<string> str1;

	cout << "Type string" << endl;
	str1.input(2);
	str1.print();

	List<double> a;
	double c = 56.132;

	List<Complex> b;
	List<Country> l;
	List<Country> m;
	
	cout << "Type double" << endl;
	a.input(5);
	a.print();

	a--;
	(a + c).print();

	cout << "Type complex" << endl;

	b.input(3);
	b.print();
	b--;
	b.print();

	cout << "Type Country" << endl;
	m.input(2);
	m.print();

	l.input(2);
	l.print();

	m = l;
	m.print();

	system("pause");
	return 0;
}