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
		cout << "       МЕНЮ       " << endl;
		cout << "1) Сформировать картотеку " << endl;
		cout << "2) Отобразить картотеку " << endl;
		cout << "3) Ввод заявки на обмен " << endl;
		cout << "4) Выход "<< endl;
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
			if (count_cards <= 0) {
				cout << endl << "Введите корректное значение! " << endl;
				break;
			}
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
			//Cards list(1, countRooms, Floor, Area, Address);
			ptr = new Cards(1, count_cards, countRooms, Floor, Area, Address);
			break;
		}
		case 2:
		{
			if (!ptr) {
				cout << "Картотека не создана!";
				break;
			}
			cout << "Картотека: " << endl;
			ptr->print_list();
			break;
		}
		case 3:
		{
			if (!ptr) {
				cout << "Картотека не создана!";
				break;
			}
			int countRooms,Floor,Area;
			string Address;
			cout << endl << "Введите данные вашей квартиры..." << endl;
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
			cout << endl << "Поиск квартиры для обмена..." << endl;
			ptr->application(new Cards(count_cards, countRooms, Floor, Area, Address));
			break;
		}
		case 4:
			return EXIT_SUCCESS;
		default: 
		{
			cout << endl << "Введите корректное значение! " << endl;
			break;
		}
		}
		cout << endl;
		system("pause");
	}
}