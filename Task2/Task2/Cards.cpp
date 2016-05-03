#include "Cards.h"

void Cards::print_list()
{
	cout << endl;
	cout << "����� ����� " << index << endl;
	cout << "����� ������: " << count_rooms << endl;
	cout << "����: " << floor << endl;
	cout << "�������: " << area << endl;
	cout << "�����: " << address << endl << endl;

		Cards* p = this->new_card;
	for (; p != NULL; p = p->new_card) {
		cout << "����� ����� " << p->index << endl;
		cout << "����� ������: " << p->count_rooms << endl;
		cout << "����: " << p->floor << endl;
		cout << "�������: " << p->area << endl;
		cout << "�����: " << p->address << endl;
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
	cout << endl << "����� ����� " << index + 1 << endl;
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

void Cards::application(Cards * card)
{
	Cards* p = this;
	Cards* s = this;
	bool f = true;
	for (; p != NULL; p = p->new_card) {
		int min = card->area - card->area / 10;
		int max = card->area + card->area / 10;
		if ((card->floor == p->floor) && (card->count_rooms == p->count_rooms) && (p->area <= max && p->area >= min)) {
			cout << endl << "�������� �������! " << endl;
			cout << endl << "����� ����� ��� ������: " << p->index << endl;
			cout << "����� ������: " << p->count_rooms << endl;
			cout << "����: " << p->floor << endl;
			cout << "�������: " << p->area << endl;
			cout << "�����: " << p->address << endl;
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
		cout << endl << "�������� �� ����� �� �������, ��������� � ���������..." << endl;
		cout << endl << "����� �����: " << card->index << endl;
		cout << "����� ������: " << card->count_rooms << endl;
		cout << "����: " << card->floor << endl;
		cout << "�������: " << card->area << endl;
		cout << "�����: " << card->address << endl;
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
