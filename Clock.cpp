#include "Clock.h"
#include <iostream>
#include <string>


void Clock::PrintMenu()
{
	std::cout << "******************************" << std::endl;
	std::cout << "* 1 - Add One Hour           *" << std::endl;
	std::cout << "* 2 - Add One Minute         *" << std::endl;
	std::cout << "* 3 - Add One Second         *" << std::endl;
	std::cout << "* 4 - Exit Program           *" << std::endl;
	std::cout << "******************************" << std::endl;

	UserMenuSelection();
}

void Clock::PrintClock()
{
	std::cout << "***************************" << "    " << "***************************" << std::endl;
	std::cout << "*       12-Hour Clock     *" << "    " << "*       24-Hour Clock     *" << std::endl;
	std::cout << "*     " << hour << ":" << minute << ":" << second << "*" << "    " << "*" << ":" << ":" << "*" << std::endl;
	std::cout << "***************************" << "    " << "***************************" << std::endl;
}


int Clock::UserMenuSelection()
{
	do 
	{
		std::cout << "Selection: ";
		std::cin >> menuSelection;

	}while(!ValidateInput(menuSelection));

	return menuSelection;
}

bool Clock::ValidateInput(int input)
{
	switch (input) 
	{
		case 1:
		return true;

		case 2:
		return true;

		case 3:
		return true;

		case 4:
		return true;

		default:
		std::cout << "Please input a valid selection" << std::endl;
		return false;
	}
}
