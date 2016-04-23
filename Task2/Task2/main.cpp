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
		cout << "1) Сформировать картотеку " << endl;
		cout << "2) Отобразить картотеку " << endl;
		cout << endl;
		cout << "Введите номер: ";
		cin >> n;
		cout << endl;
		switch (n)
		{
		case 1:
		{
			cout << "Введите количество карточек: ";
			cin >> count_cards;
			int countRooms, Floor, Area;
			string Address;
			cout << "Карта номер " << 1 << endl;
			cout << "Введите число комнат: ";
			cin >> countRooms;
			cout << "Введите этаж: ";
			cin >> Floor;
			cout << "Введите площадь: ";
			cin >> Area;
			cout << "Введите адрес: ";
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
				cout << "Картотека не создана!";
				break;
			}
			cout << "Картотека: " << endl;
			ptr->print_list(ptr);
			break;
		}
		default:
			break;
		}
	}
	return 0;
}