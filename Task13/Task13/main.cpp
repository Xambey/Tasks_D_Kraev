#include <iostream>
#include <conio.h>
#include <bitset>
using namespace std;

int Dec(int , int);

int main()
{
	//������ ����� 120 , ���� 127
	setlocale(LC_ALL, "RUS");
	int n,k;
	cout << "������� ����� ��� ����������: ";
	cin >> n;
	cout << "������� ���� ��� ����������: ";
	cin >> k;
	for (;;)
	{
		int r = Dec(n, k);
		int s = Dec(r, k);
		if (n == s)
			break;
		else {
			cout << "���� ���� �� ��������! ������� ������: ";
			cin >> k;
		}
	}
	auto dec = Dec(n, k);

	cout << "�������..." << endl << "����: " << dec << endl;
	cout << "��������������..." << endl << Dec(dec, k) << endl;
	system("pause");
	return 0;
}

int Dec(int n, int key)
{
	return(key & (~n));
}
