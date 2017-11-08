#include <iostream>
#include "Celsius.h"
#include "Fahrenheit.h"
using namespace std;

void main()
{
	Celsius cBoil(100);
	Celsius cFreez(0);
	Celsius cAbsoluteZero(-273.15);
	Fahrenheit fFreez = cFreez;
	
	cout << "The boiling point is: " << cBoil << ". and: " << Fahrenheit(cBoil) << endl;
	cout << "The freezing point is: " << cFreez << ". and: " << Fahrenheit(cFreez) << endl;
	cout << "The Absolute Zero point is: " << cAbsoluteZero << ". and: " << Fahrenheit(cAbsoluteZero) << endl;
}