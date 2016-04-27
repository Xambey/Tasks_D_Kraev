#include "Сountry.h"



Country::Country():Country(NULL,NULL,0)
{

	cout << endl << "Вызван конструктор по умолчанию, объекта " << this << endl;
}

Country::Country(char * name, char * form, float area)
{
	cout << endl << "Вызван конструктор с параметрами, объекта " << this << endl;
	this->name = name;
	this->form_of_goverment = form;
	this->area = area;
}

Country::Country(const Country & obj)
{

	name = new char[strlen(obj.name)];
	form_of_goverment = new char[strlen(obj.form_of_goverment)];
	cout << endl << "Вызван конструктор копирования данных из объект " << &obj << " в объект " << this << endl;
	strcpy(name, obj.name);
	strcpy(form_of_goverment, obj.form_of_goverment);
	this->area = obj.area;
}

Country::~Country()
{
	cout << endl << "Вызван деструктор объекта " << this << endl;
}

void Country::print()
{
	cout << endl << "Объект " << this << endl;
	cout << "Название страны: ";
	if (!name) cout << " ";
	else
	for (char* i = name; *i; i++) {
		cout << *i;
	}
	cout << endl << "Форма правления: ";
	if (!form_of_goverment) cout << " ";
	else
	for (char* i = form_of_goverment; *i; i++) {
		cout << *i;
	}
	cout << endl << "Площадь: " << std::setprecision(10) << area << endl;
}

void Country::set(char * name, char * form, float area)
{
	this->name = name;
	this->form_of_goverment = form;
	this->area = area;
}
