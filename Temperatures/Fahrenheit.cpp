#include "Fahrenheit.h"

Fahrenheit::Fahrenheit()
{
}

Fahrenheit::Fahrenheit(double d)
{
	m_degree = d;
}

Fahrenheit::Fahrenheit(Celsius cel)
{
	m_degree = cel.GetDegree()*1.8 + 32;
}

Fahrenheit::~Fahrenheit()
{
}

double Fahrenheit::GetDegree()
{
	return m_degree;
}

Fahrenheit::operator Celsius()
{
	return Celsius((m_degree - 32) / 1.8);
}

ostream& operator << (ostream &os, Fahrenheit &f)
{
	os << f.GetDegree() << " Fahrenheit degree";
	return os;
}