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
}
