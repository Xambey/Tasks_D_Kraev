#include "Cards.h"

void Cards::print_list(Cards* list)
{
	cout << endl;
	cout << "����� ����� " << index << endl;
	cout << "����� ������: " << count_rooms;
	cout << "����: " << floor;
	cout << "�������: " << area;
	cout << "�����: " << address << endl;

		Cards* p = list->new_card;
	for (; p; p = p->new_card) {
		cout << "����� ����� " << p->index << endl;
		cout << "����� ������: " << p->count_rooms << endl;
		cout << "����: " << p->floor << endl;
		cout << "�������: " << p->area << endl;
		cout << "�����: " << p->address << endl;
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
	cout << "����� ����� " << index + 1 << endl;
	cout << "������� ����� ������: ";
	cin >> countRooms;
	cout << "������� ����: ";
	cin >> Floor;
	cout << "������� �������: ";
	cin >> Area;
	cout << "������� �����: ";
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
