#pragma once
#include <string>
#include <iostream>
using namespace std;
class Cards
{
public:
	int index;
	int count_rooms;
	int floor;
	int area;
	string address;
	Cards* new_card;
	void print_list(Cards*list);
	Cards *create_list(int count_elements);
	Cards(int index, int count_rooms, int floor, int area, string address);
	Cards(int index,int count_elements, int count_rooms, int floor, int area, string address);
};