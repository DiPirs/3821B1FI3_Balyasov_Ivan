#pragma once

#include "Cars.h"


class TMiddle :public TCras
{
public:

	int answer;

	std::string name = "Middle\n";
	std::string description = "Average price cars\n";

	int Description();
	void TypesOfCars();

	int MiddlClassDescription();
	int Middl_Select();
	int Middl_Cars(int mark);

};