#include <iostream>
#include <string>
#include <vector>
#include "Library.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	LIB::Library lib;
	while (true)
		lib.translate();

	system("pause");
	return 0;
}
