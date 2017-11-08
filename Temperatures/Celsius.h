#pragma once
#include <iostream>
#include "Fahrenheit.h"
using namespace std;

class Fahrenheit;

class Celsius
{
public:
	Celsius();
	Celsius(double d);
	explicit Celsius(Fahrenheit f);
	~Celsius();
	double GetDegree();
	operator Fahrenheit();
	friend ostream& operator << (ostream& os, Celsius &c);
	
private:
	double m_degree;

};