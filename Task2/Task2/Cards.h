#pragma once
#include <string>
#include <iostream>
#include <cstdlib>
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
	void print_list();
	void create_list(int count_elements);
	void application(Cards* card);
	Cards(int index, int count_rooms, int floor, int area, string address);
	Cards(int index,int count_elements, int count_rooms, int floor, int area, string address);
};