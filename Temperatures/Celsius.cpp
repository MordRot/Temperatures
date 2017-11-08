#include "Celsius.h"

Celsius::Celsius()
{
}

Celsius::Celsius(double d)
{
	m_degree = d;
}

Celsius::Celsius(Fahrenheit fahr)
{
	m_degree = (fahr.GetDegree() - 32) / 1.8;
}

Celsius::~Celsius()
{
}

double Celsius::GetDegree()
{
	return m_degree;
}

Celsius::operator Fahrenheit()
{
	return Fahrenheit(m_degree*1.8 + 32);
}

ostream& operator << (ostream &os, Celsius &c)
{
	os << c.GetDegree() << " Celsius degree";
	return os;
}