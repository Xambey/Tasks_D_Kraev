#include "Cards.h"

void Cards::print_list()
{
	cout << endl;
	cout << "Карта номер " << index << endl;
	cout << "Число комнат: " << count_rooms << endl;
	cout << "Этаж: " << floor << endl;
	cout << "Площадь: " << area << endl;
	cout << "Адрес: " << address << endl << endl;

		Cards* p = this->new_card;
	for (; p != NULL; p = p->new_card) {
		cout << "Карта номер " << p->index << endl;
		cout << "Число комнат: " << p->count_rooms << endl;
		cout << "Этаж: " << p->floor << endl;
		cout << "Площадь: " << p->area << endl;
		cout << "Адрес: " << p->address << endl;
		cout << endl;
	}
}

void Cards::create_list(int count_elements)
{
	if (count_elements <= 0) {
		new_card = NULL;
		return;
	}
	int countRooms, Floor, Area;
	string Address;
	cout << endl << "Карта номер " << index + 1 << endl;
	cout << "Введите число комнат: ";
	cin >> countRooms;
	cout << "Введите этаж: ";
	cin >> Floor;
	cout << "Введите площадь: ";
	cin >> Area;
	cout << "Введите адрес: ";
	cin.ignore();
	getline(cin, Address);
	new_card = new Cards(index + 1, count_elements, countRooms, Floor, Area, Address);
}

void Cards::application(Cards * card)
{
	Cards* p = this;
	Cards* s = this;
	bool f = true;
	for (; p != NULL; p = p->new_card) {
		int min = card->area - card->area / 10;
		int max = card->area + card->area / 10;
		if ((card->floor == p->floor) && (card->count_rooms == p->count_rooms) && (p->area <= max && p->area >= min)) {
			cout << endl << "Квартира найдена! " << endl;
			cout << endl << "Номер карты для обмена: " << p->index << endl;
			cout << "Число комнат: " << p->count_rooms << endl;
			cout << "Этаж: " << p->floor << endl;
			cout << "Площадь: " << p->area << endl;
			cout << "Адрес: " << p->address << endl;
			cout << endl;
			Cards* t = s;
			for (; t != NULL; t = t->new_card) {
				if (t->new_card == p) {
					t->new_card = p->new_card;
				}
			}
			f = false;
		}

	}
	if (f) {
		cout << endl << "Квартира на обмен не найдена, добавляем в картотеку..." << endl;
		cout << endl << "Номер карты: " << card->index << endl;
		cout << "Число комнат: " << card->count_rooms << endl;
		cout << "Этаж: " << card->floor << endl;
		cout << "Площадь: " << card->area << endl;
		cout << "Адрес: " << card->address << endl;
		cout << endl;
		for (; ; s = s->new_card) {
			if (!s->new_card) {
				s->new_card = card;
				card->new_card = NULL;
				break;
			}
		}
	}

}

Cards::Cards(int index, int count_rooms, int floor, int area, string address)
{
	this->index = index;
	this->count_rooms = count_rooms;
	this->floor = floor;
	this->area = area;
	this->address = address;
}

Cards::Cards(int index, int count_elements, int count_rooms,int floor, int area, std::string address): Cards(index, count_rooms, floor, area, address)
{
	create_list(count_elements - 1);
}
