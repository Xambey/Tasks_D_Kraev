#pragma once
#include <Windows.h>
//extern char bufRus[256];
using std::string;
string Rus(const char* text) {
	char bufRus[256];
	CharToOem(text, bufRus);
	string str(bufRus);
	return str;
}
