#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Rus.h"
extern char bufRus[256];

using namespace std;
namespace LIB
{
	struct Word
	{
		string en, ru;
	};

	class Library
	{
		vector <Word> dict;
	public:
		Library();

		void translate();
	};
}
