#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class State //абстрактный класс
{
public:
	State();
	virtual~State();
	static void print();
protected:
	string name;
	State* next;
	static State* begin;
	virtual void Show() = 0;
	virtual void Add();
};

