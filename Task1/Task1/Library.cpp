#include "Library.h"
using LIB::Library;

Library::Library()
{
	int n;
	cout << "Введите количество слов, для добавления в словарь: ";
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++)
	{
		Word word;
		cout << "Введите слово на английском: ";
		string t;
		getline(cin, t);
		word.en = t.c_str();
		cout << "Введите перевод слова: ";
		getline(cin, t);
		word.ru = Rus(t.c_str());
		cout << endl;
		dict.push_back(word);
	}
}

void Library::translite()
{
	string str;
	cout << "Введите слово для поиска: ";
	getline(cin, str);

	for (auto i = dict.begin(); i != dict.end(); i++)
	{
		if (i->en == str) {
			cout << "Перевод: " << i->ru << endl;
			return;
		}
	}
	cout << " Слово не найдено! " << endl;
}
