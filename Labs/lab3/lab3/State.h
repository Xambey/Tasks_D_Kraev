#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
using namespace std;

class State //����������� �����
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

