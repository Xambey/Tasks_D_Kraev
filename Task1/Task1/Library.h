#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Rus.h"

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

		void translite();
	};
}
