#include "Library.h"
using LIB::Library;

Library::Library() 
{
	cout << "������� ���������� ����, ��� ���������� � �������: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "������� ����� �� ����������: ";
		cin.ignore();
		string r, e,t;
		getline(cin, t);
		cin.ignore();
		cout << "������� ������� �����: ";
		e = Rus(t.c_str());
		t.clear();
		getline(cin, t);
		r = Rus(t.c_str());
		rus.push_back(r);
		eng.push_back(e);
		cout << endl;
	}
	string str;
	cout << "������� ����� ��� ������: ";
	cin.ignore();
	getline(cin, str);
	bool f = false;
	for (int i = 0; i < eng.size(); i++) {
		if (eng.at(i) == str) {
			cout << "�������: " << rus.at(i);
			f = true;
		}
	}
	if (!f) {
		cout << endl << " ����� �� �������! ";
	}
}
