#include "Luxe.h"

#include "Audi.h"
#include "MercedesBenz.h"

int TLuxe::Description()
{
	int answer;
	std::cout << "Do you want to read the class description?\n" << "1. Yes\n2. No\n" << "Your answer: ";
	std::cin >> answer;

	return answer;
}

int TLuxe::LuxeClassDescription()
{
	int answer;
	answer = Description();

	if (answer == 1)
	{
		std::cout << "\n";
		std::cout << name;
		std::cout << description;
		Luxe_Select();  // print mashin
	}
	else if (answer == 2)
	{
		Luxe_Select();
	}
	else if (answer == 0)
	{
		SelectClass(0);
	}
	else
	{
		std::cout << "Wrong answer, try again!\n\n";
	}
	return 0;
}

int TLuxe::Luxe_Select()
{
	int answer = 0;

	TypesOfCars();

	if (answer == 0)
		return Luxe_Cars(answer);
	else if (answer == 0)
		LuxeClassDescription();
	else
	{
		std::cout << "Wrong answer, try again!";
		return Luxe_Select();
	}

	return 0;
}

int TLuxe::Luxe_Cars(int mark)
{
	if (mark == 1)
	{
		MercedesBenz MercedesBenz;
		MercedesBenz.information();
		RestartOrEnd(3);
	}
	else if (mark == 2)
	{
		Audi Audi;
		Audi.information();
		RestartOrEnd(3);
	}

	return 0;
}

void TLuxe::TypesOfCars()
{
	std::cout << "\nSelect a mark cars. Enter nubmer of mark cars:\n";
	std::string marks[2] = { "Mercedes-Benz", "Audi" };
	for (int num = 1; num < 3; num++)
	{
		std::cout << num << ". " << marks[num - 1] << "\n";
	}
	std::cout << "0. Step back\nYour answer: ";
	std::cin >> answer;

	if (answer >= 1 && answer < 3)
	{
		Luxe_Cars(answer);
	}
	else if (answer == 0)
		SelectClass(0);
	else
	{
		std::cout << "\nWrong answer!\n";
		return TypesOfCars();
	}
}