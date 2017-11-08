#pragma once
#include <iostream>
#include "Celsius.h"
using namespace std;

class Celsius;

class Fahrenheit
{
public:
	Fahrenheit();
	Fahrenheit(double d);
	explicit Fahrenheit(Celsius cel);
	~Fahrenheit();
	double GetDegree();
	operator Celsius();
	friend ostream& operator << (ostream &os, Fahrenheit &f);

private:
	double m_degree;
};