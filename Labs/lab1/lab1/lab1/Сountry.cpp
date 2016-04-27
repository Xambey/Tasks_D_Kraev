#include "�ountry.h"



Country::Country():Country(NULL,NULL,0)
{

	cout << endl << "������ ����������� �� ���������, ������� " << this << endl;
}

Country::Country(char * name, char * form, float area)
{
	cout << endl << "������ ����������� � �����������, ������� " << this << endl;
	this->name = name;
	this->form_of_goverment = form;
	this->area = area;
}

Country::Country(const Country & obj)
{

	name = new char[strlen(obj.name)];
	form_of_goverment = new char[strlen(obj.form_of_goverment)];
	cout << endl << "������ ����������� ����������� ������ �� ������ " << &obj << " � ������ " << this << endl;
	strcpy(name, obj.name);
	strcpy(form_of_goverment, obj.form_of_goverment);
	this->area = obj.area;
}

Country::~Country()
{
	cout << endl << "������ ���������� ������� " << this << endl;
}

void Country::print()
{
	cout << endl << "������ " << this << endl;
	cout << "�������� ������: ";
	if (!name) cout << " ";
	else
	for (char* i = name; *i; i++) {
		cout << *i;
	}
	cout << endl << "����� ���������: ";
	if (!form_of_goverment) cout << " ";
	else
	for (char* i = form_of_goverment; *i; i++) {
		cout << *i;
	}
	cout << endl << "�������: " << std::setprecision(10) << area << endl;
}

void Country::set(char * name, char * form, float area)
{
	this->name = name;
	this->form_of_goverment = form;
	this->area = area;
}
