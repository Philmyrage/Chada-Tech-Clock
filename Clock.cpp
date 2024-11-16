#include "Clock.h"
#include <iostream>
#include <string>


void Clock::AddHour(int hour)
{
	//if hour exceeds 12 or 24 roll it over.
	//easier to convert to 24 hour time here to do the calculation.
	this->hour += hour;
	if (hour > 23) {
		hour = 0;
	}
}

void Clock::AddMinute(int minute)
{
	this->minute += minute;
	//if minute exceeds 59 roll it to zero and increment hour.
	if (minute > 59) 
	{
		minute = 0;
		AddHour(1);
	}
}

void Clock::AddSecond(int second)
{
	this->second += second;

	//if second exceeds 59 roll it to zero and increment minute.
	if (second > 59) 
	{
		second = 0;
		AddMinute(1);
	}
}

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
	//Converting the time to twelve hour time in a temp variable and setting the time of day.
	int thour = 0;
	if (hour > 12)
	{
		thour = hour - 12;
	}
	else if (hour == 0)
	{
		thour = 1;
	}
	else
	{
		thour = hour;
	}
	std::string AMPM = (hour >= 12) ? "PM" : "AM";

	std::cout << "***************************" << "    " << "***************************" << std::endl;
	std::cout << "*       12-Hour Clock     *" << "    " << "*       24-Hour Clock     *" << std::endl;
	std::cout << "*         " << thour << ":" << minute << ":" << second << " " << AMPM << "     *" << "    " << "*          "
	<< hour << ":" << minute << ":" << second << "       *" << std::endl;
	std::cout << "***************************" << "    " << "***************************" << std::endl;
}

int Clock::UserMenuSelection()
{
	do 
	{
		std::cout << "Selection: ";
		std::cin >> menuSelection;

	}while(!ValidateInputAndExecuteOperation(menuSelection));

	return menuSelection;
}

bool Clock::ValidateInputAndExecuteOperation(int input)
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
