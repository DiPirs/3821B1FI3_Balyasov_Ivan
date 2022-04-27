#pragma once

#include "Cars.h"

class TLuxe :public TCras
{
public:

	int answer;

	std::string name = "Luxe\n";
	std::string description = "Expensive cars\n";

	int Description();
	void TypesOfCars();

	int LuxeClassDescription();
	int Luxe_Select();
	int Luxe_Cars(int mark);

};