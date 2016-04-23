#include "Library.h"
using LIB::Library;

Library::Library() 
{
	cout << "Введите количество слов, для добавления в словарь: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Введите слово на английском: ";
		cin.ignore();
		string r, e,t;
		getline(cin, t);
		cin.ignore();
		cout << "Введите перевод слова: ";
		e = Rus(t.c_str());
		t.clear();
		getline(cin, t);
		r = Rus(t.c_str());
		rus.push_back(r);
		eng.push_back(e);
		cout << endl;
	}
	string str;
	cout << "Введите слово для поиска: ";
	cin.ignore();
	getline(cin, str);
	bool f = false;
	for (int i = 0; i < eng.size(); i++) {
		if (eng.at(i) == str) {
			cout << "Перевод: " << rus.at(i);
			f = true;
		}
	}
	if (!f) {
		cout << endl << " Слово не найдено! ";
	}
}
