#pragma once
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

class Complex // ����� ����������� �����  
{
	double re, im; // ����� � ������ �����  
  
public:
	Complex();
	Complex(double r);
	Complex(double r, double i);
	Complex(Complex &c);
	~Complex();
	float abs();
	Complex & operator = (Complex &c);
	Complex operator + (Complex &c);
	Complex operator - (Complex &c);
	Complex operator * (Complex &c);
	Complex operator / (Complex &c);

	friend ostream &operator<<(ostream & out, Complex c);
	friend istream &operator>>(istream & in, Complex& c);
};


