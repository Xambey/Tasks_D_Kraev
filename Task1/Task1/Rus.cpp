#include "Rus.h"

string Rus(const char * text)
{
	char bufRus[256];
	OemToChar(text, bufRus);
	string str(bufRus);
	return str;
}
