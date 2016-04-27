#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::strcpy;
using std::endl;
using std::strlen;
using std::setprecision;

class Country
{
	char* name;
	char* form_of_goverment;
	float area; 
public:
	Country* obj;
	void(*ptr)();
	Country();
	Country(char* name, char* form, float area);
	Country(const Country& obj);
	~Country();
	void print();
	void set(char* name, char* form, float area);
};

