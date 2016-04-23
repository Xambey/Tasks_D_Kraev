#include <iostream>
#include "Cards.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, count_cards;
	Cards* ptr = NULL;
	while (true)
	{
		cout << endl;
		cout << "1) ������������ ��������� " << endl;
		cout << "2) ���������� ��������� " << endl;
		cout << endl;
		cout << "������� �����: ";
		cin >> n;
		cout << endl;
		switch (n)
		{
		case 1:
		{
			cout << "������� ���������� ��������: ";
			cin >> count_cards;
			int countRooms, Floor, Area;
			string Address;
			cout << "����� ����� " << 1 << endl;
			cout << "������� ����� ������: ";
			cin >> countRooms;
			cout << "������� ����: ";
			cin >> Floor;
			cout << "������� �������: ";
			cin >> Area;
			cout << "������� �����: ";
			cin.ignore();
			getline(cin, Address);
			cout << endl;
			Cards list(1, countRooms, Floor, Area, Address);
			ptr = list.create_list(count_cards - 1);
			break;
		}
		case 2:
		{
			if (!ptr) {
				cout << "��������� �� �������!";
				break;
			}
			cout << "���������: " << endl;
			ptr->print_list(ptr);
			break;
		}
		default:
			break;
		}
	}
	return 0;
}