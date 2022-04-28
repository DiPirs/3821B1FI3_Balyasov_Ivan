#pragma once

#include "Middle.h"

class Hyundai :public TMiddle
{
public:
	std::string name = "Hyundai";
	std::string description = "A South Korean automotive company.";

	void information();

};