#include "Rus.h"
char bufRus[256];
string Rus(const char * text)
{
	OemToChar(text, bufRus);
	string str(bufRus);
	return str;
}
