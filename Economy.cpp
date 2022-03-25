#include "Economy.h"
#include "Vaz.h"
#include "Renault.h"
#include "Cars.h"

int TEconomy::Description()
{
	int answer;
	std::cout << "Do you want to read the class description?\n" << "1. Yes\n2. No\n" << "Your answer: ";
	std::cin >> answer;

	return answer;
}

int TEconomy::EcoClassDescription()
{
	int answer;
	answer = Description();

	if (answer == 1)
	{
		std::cout << "\n";
		std::cout << name;
		std::cout << description;
		Eco_Select();  // print mashin
	}
	else if (answer == 2)
	{
		Eco_Select();
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

int TEconomy::Eco_Select()
{
	int answer;

	TypesOfCars();

	if (answer == 0) 
		return Economy_Cars(answer);
	else if (answer == 0) 
		EcoClassDescription();
	else
	{
		std::cout << "Wrong answer, try again!";
		return Eco_Select();
	}

	return 0;
}

int TEconomy::Economy_Cars(int mark)
{
	if (mark == 1)
	{
		Vaz vaz;
		vaz.information();
		RestartOrEnd(1);
	}
	else if (mark == 2)
	{
		Renault Renault;
		Renault.information();
		RestartOrEnd(1);
	}

	return 0;
}

void TEconomy::TypesOfCars()
{
	std::cout << "\nSelect a mark cars. Enter nubmer of mark cars:\n";
	std::string marks[2] = { "Vaz", "Reno" };
	for (int num = 1; num < 3; num++)
	{
		std::cout << num << ". " << marks[num - 1] << "\n";
	}
	std::cout << "0. Step back\nYour answer: ";
	std::cin >> answer;
	std::cout << "\n";

	if (answer >= 1 && answer < 3)
	{
		Economy_Cars(answer);
	}
	else if (answer == 0)
		SelectClass(0);
	else
	{
		std::cout << "\nWrong answer!\n";
		return TypesOfCars();
	}
}
