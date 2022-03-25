#include "Middle.h"
#include "Cars.h"

#include "Hyundai.h"
#include "Toyota.h"

int TMiddle::Description()
{
	int answer;
	std::cout << "Do you want to read the class description?\n" << "1. Yes\n2. No\n" << "Your answer: ";
	std::cin >> answer;

	return answer;
}

int TMiddle::MiddlClassDescription()
{
	int answer;
	answer = Description();

	if (answer == 1)
	{
		std::cout << "\n";
		std::cout << name;
		std::cout << description;
		Middl_Select();  // print mashin
	}
	else if (answer == 2)
	{
		Middl_Select();
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

int TMiddle::Middl_Select()
{
	int answer = 0;

	TypesOfCars();

	if (answer == 0) 
		return Middl_Cars(answer);
	else if (answer == 0) 
		MiddlClassDescription();
	else
	{
		std::cout << "Wrong answer, try again!";
		return Middl_Select();
	}

	return 0;
}

int TMiddle::Middl_Cars(int mark)
{
	if (mark == 1)
	{
		Hyundai Hyundai;
		Hyundai.information();
		RestartOrEnd(2);
	}
	else if (mark == 2) 
	{
		Toyota Toyota;
		Toyota.information();
		RestartOrEnd(2);
	}

	return 0;
}

void TMiddle::TypesOfCars()
{
	std::cout << "\nSelect a mark cars. Enter nubmer of mark cars:\n";
	std::string marks[2] = { "Hyudai", "Toyota" };
	for (int num = 1; num < 3; num++)
	{
		std::cout << num << ". " << marks[num - 1] << "\n";
	}
	std::cout << "0. Step back\nYour answer: ";
	std::cin >> answer;
	std::cout << "\n";

	if (answer >= 1 && answer < 3)
	{
		Middl_Cars(answer);
	}
	else if (answer == 0)
		SelectClass(0);
	else
	{
		std::cout << "\nWrong answer!\n";
		return TypesOfCars();
	}
}
