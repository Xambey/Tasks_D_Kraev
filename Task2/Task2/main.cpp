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
		system("cls");
		cout << endl;
		cout << "       ����       " << endl;
		cout << "1) ������������ ��������� " << endl;
		cout << "2) ���������� ��������� " << endl;
		cout << "3) ���� ������ �� ����� " << endl;
		cout << "4) ����� "<< endl;
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
			if (count_cards <= 0) {
				cout << endl << "������� ���������� ��������! " << endl;
				break;
			}
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
			//Cards list(1, countRooms, Floor, Area, Address);
			ptr = new Cards(1, count_cards, countRooms, Floor, Area, Address);
			break;
		}
		case 2:
		{
			if (!ptr) {
				cout << "��������� �� �������!";
				break;
			}
			cout << "���������: " << endl;
			ptr->print_list();
			break;
		}
		case 3:
		{
			if (!ptr) {
				cout << "��������� �� �������!";
				break;
			}
			int countRooms,Floor,Area;
			string Address;
			cout << endl << "������� ������ ����� ��������..." << endl;
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
			cout << endl << "����� �������� ��� ������..." << endl;
			ptr->application(new Cards(count_cards, countRooms, Floor, Area, Address));
			break;
		}
		case 4:
			return EXIT_SUCCESS;
		default: 
		{
			cout << endl << "������� ���������� ��������! " << endl;
			break;
		}
		}
		cout << endl;
		system("pause");
	}
}