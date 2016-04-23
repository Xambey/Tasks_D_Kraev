#include "Cards.h"

void Cards::print_list(Cards* list)
{
	cout << endl;
	cout << "Карта номер " << index << endl;
	cout << "Число комнат: " << count_rooms;
	cout << "Этаж: " << floor;
	cout << "Площадь: " << area;
	cout << "Адрес: " << address << endl;

		Cards* p = list->new_card;
	for (; p; p = p->new_card) {
		cout << "Карта номер " << p->index << endl;
		cout << "Число комнат: " << p->count_rooms << endl;
		cout << "Этаж: " << p->floor << endl;
		cout << "Площадь: " << p->area << endl;
		cout << "Адрес: " << p->address << endl;
		cout << endl;
	}
}

Cards *Cards::create_list(int count_elements)
{
	if (!count_elements) {
		new_card = NULL;
		return this;
	}
	int countRooms, Floor, Area;
	string Address;
	cout << "Карта номер " << index + 1 << endl;
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
	/*this->index = index;
	this->count_rooms = count_rooms;
	this->floor = floor;
	this->area = area;
	this->address = address;*/
	new_card = create_list(count_elements - 1);
}
