#include "Cars.h"

#include "Economy.h"
#include "Middle.h"
#include "Luxe.h"

#include "Vaz.h"
#include "Renault.h"
#include "Hyundai.h"
#include "Toyota.h"
#include "Audi.h"
#include "MercedesBenz.h"


int TCras::Menu_1()
{
	int answer;
	std::cout << "Select type of auto class:\n";
	std::cout << "1. Economy\n2. Middle\n3. Luxe\n";
	std::cout << "Your answer: ";
	std::cin >> answer;
	std::cout << "\n";

	return RestartTranport(answer);
}

int TCras::SelectClass(int _answer)
{
	int answer;
	TCras cars;
	answer = cars.Menu_1();

	if (answer > 0 && answer < 4)
		return RestartTranport(answer);
	else 
	{
		std::cout << "wrong answer, try again!\n\n";
		return SelectClass(_answer);
	}

	return 0;
}

int TCras::RestartTranport(int answer)
{
	if (answer == 1)
	{
		TEconomy _EcoClassDescription;
		_EcoClassDescription.EcoClassDescription();
	}
	if (answer == 2)
	{
		TMiddle _MiddlClassDescription;
		_MiddlClassDescription.MiddlClassDescription();
		return 0;
	}
	if (answer == 3)
	{
		TLuxe _LuxeClassDescription;
		_LuxeClassDescription.LuxeClassDescription();
		return 0;
	}

	return 0;
}

int TCras::RestartOrEnd(int ClassNumber) 
{
	int answer_1;
	std::cout << "\nSelect one of the function:\n";
	std::cout << "1. Step back\n2. Return to choise class\n3. Exit\n";
	std::cout << "Your answer: ";
	std::cin >> answer_1;
	std::cout << "\n";

	if (answer_1 == 1)
	{
		if (ClassNumber == 1)
		{
			TEconomy _Eco_Select;
			_Eco_Select.Eco_Select();
		}
		else if (ClassNumber == 2)
		{
			TMiddle _Middl_Select;
			_Middl_Select.Middl_Select();
		}
		else if (ClassNumber == 3)
		{
			TLuxe _Luxe_Select;
			_Luxe_Select.Luxe_Select();
		}
	}
	else if (answer_1 == 2)
	{
		SelectClass(0);
	}
	else if (answer_1 == 3)
	{
		return 0;
	}
	else
	{
		std::cout << "Wrong answer!\n\n";
		return RestartOrEnd(ClassNumber);
	}
	return 0;
}


