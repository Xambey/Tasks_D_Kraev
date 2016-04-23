#include "Library.h"
using LIB::Library;

Library::Library() 
{
	cout << "¬ведите количество слов, дл€ добавлени€ в словарь: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "¬ведите слово на английском: ";
		cin.ignore();
		string r, e,t;
		getline(cin, t);
		cin.ignore();
		cout << "¬ведите перевод слова: ";
		e = Rus(t.c_str());
		t.clear();
		getline(cin, t);
		r = Rus(t.c_str());
		rus.push_back(r);
		eng.push_back(e);
		cout << endl;
	}
}
