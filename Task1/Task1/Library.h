#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Rus.h"

char bufRus[256];
using namespace std;
namespace LIB
{

	class Library
	{
		vector <string> rus,eng; //buffers
		int n; //count words
	public:
		Library();
	};
}
