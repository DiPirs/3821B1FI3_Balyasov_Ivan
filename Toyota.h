#pragma once

#include "Middle.h"

class Toyota :public TMiddle
{
public:
	std::string name = "Toyota";
	std::string description = "The largest Japanese automotive corporation";

	void information();

};