#include <iostream>
#include <conio.h>
#include <bitset>
using namespace std;

int Dec(int , int);

int main()
{
	//Пример числа 120 , ключ 127
	setlocale(LC_ALL, "RUS");
	int n,k;
	cout << "Введите число для шифрования: ";
	cin >> n;
	cout << "Введите ключ для шифрования: ";
	cin >> k;
	for (;;)
	{
		int r = Dec(n, k);
		int s = Dec(r, k);
		if (n == s)
			break;
		else {
			cout << "Этот ключ не подходит! Введите заново: ";
			cin >> k;
		}
	}
	auto dec = Dec(n, k);

	cout << "Шифруем..." << endl << "Шифр: " << dec << endl;
	cout << "Расшифровываем..." << endl << Dec(dec, k) << endl;
	system("pause");
	return 0;
}

int Dec(int n, int key)
{
	return(key & (~n));
}
