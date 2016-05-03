#include "�ountry.h"



Country::Country()
{
	this->name = new char[256];
	this->form_of_goverment = new char[256];
	this->area = 0;
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

ostream &operator<<(ostream &out, Country c)
{
	cout << endl << "������ " << &c << endl;
	cout << "�������� ������: ";
	if (!c.name) out << " ";
	else
		for (char* i = c.name; *i; i++) {
			out << *i;
		}
	out << endl << "����� ���������: ";
	if (!c.form_of_goverment) out << " ";
	else
		for (char* i = c.form_of_goverment; *i; i++) {
			out << *i;
		}
	out << endl << "�������: " << std::setprecision(10) << c.area << endl;
	return out;
}

istream &operator>>(istream &in, Country& c)
{
	cout << "������� �������� ������: ";
	in.ignore();
	in.getline(c.name, 30, '\n');
	cout << "������� ����� ���������: ";
	in.getline(c.form_of_goverment, 30, '\n');
	cout << "������� ������� ������: ";
	in >> c.area;
	in.ignore();
	return in;
}
