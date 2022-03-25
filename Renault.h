#pragma once

#include "Economy.h"


class Renault :public TEconomy
{
public:
	std::string name = "Renault";
	std::string description = "One of the greatest French car manufacturing companies";

	void information();

};