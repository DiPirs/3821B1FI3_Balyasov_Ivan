#pragma once
#include "Cars.h"

class TEconomy :public TCras
{
public:

	int answer;

	std::string name = "Economy\n";
	std::string description = "Lower prise\n";

	int Description();
	void TypesOfCars();

	int EcoClassDescription();
	int Eco_Select();
	int Economy_Cars(int mark);

};