/*
	Created by: Phillip Wood
	GitHub: https://github.com/Philmyrage/Chada-Tech-Clock
	Date: 11/16/2024
*/

#include "Clock.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>


void Clock::AddHour(int hour)
{

	this->hour += hour;
	//if hour exceeds 23 roll it over.
	if (this->hour > 23) {
		this->hour = 0;
	}
}

void Clock::AddMinute(int minute)
{
	this->minute += minute;
	//if minute exceeds 59 roll it to zero and increment hour.
	if (this->minute > 59) 
	{
		this->minute = 0;
		AddHour(1);
	}
}

void Clock::AddSecond(int second)
{
	this->second += second;

	//if second exceeds 59 roll it to zero and increment minute.
	if (this->second > 59) 
	{
		this->second = 0;
		AddMinute(1);
	}
}

void Clock::UserInitialValues()
{
	std::vector<int> values(3);
	std::string input;

	std::cout << "Enter: Hour(0-23) Minutes(0-59) Seconds(0-59) separated by space's" << std::endl;
	std::getline(std::cin, input);
	std::istringstream stream(input);

	int num = 0;
	int count = 0;
	while (stream >> num)
	{
		values.at(count) = num;
		count++;
	}

	if (RangeCheck(values.at(0), 0, 23) && RangeCheck(values.at(1), 0, 59) && RangeCheck(values.at(1), 0, 59))
	{
		SetHour(values.at(0));
		SetMinute(values.at(1));
		SetSecond(values.at(2));
	}
	else
	{
		std::cout << "Invalid Input, please try again." << std::endl;
		UserInitialValues();
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

void Clock::PrintClocks()
{
	//Converting the time to twelve hour time in a temp variable and setting the time of day.
	int thour = 0;
	if (hour > 12)
	{
		thour = hour - 12;
	}
	else if (hour == 0)
	{
		thour = 12;
	}
	else
	{
		thour = hour;
	}
	std::string AMPM = (hour < 12) || (hour == 0) ? "AM" : "PM";

	std::cout << "***************************" << "    " << "***************************" << std::endl;
	std::cout << "       12-Hour Clock     " << "    " << "         24-Hour Clock     " << std::endl;
	std::cout << "        " << thour << ":" << minute << ":" << second << " " << AMPM << "                      "
	<< hour << ":" << minute << ":" << second << "       " << std::endl;
	std::cout << "***************************" << "    " << "***************************" << std::endl;
	std::cout << std::endl << std::endl; //printing some empty lines for space...
}

int Clock::UserMenuSelection()
{
	do 
	{
		std::cout << "Selection: ";
		std::cin >> menuSelection;
		//Handle non integer input!
		if(std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		std::cout << std::endl; // to separate from older selections.

	}while(!ValidateInputAndExecuteOperation(menuSelection));

	return menuSelection;
}

bool Clock::ValidateInputAndExecuteOperation(int input)
{
	switch (input) 
	{
		case 1:
		AddHour(1);
		return true;

		case 2:
		AddMinute(1);
		return true;

		case 3:
		AddSecond(1);
		return true;

		case 4:
		return true;

		default:
		std::cout << "Please input a valid selection" << std::endl;
		return false;
	}
}

bool Clock::RangeCheck(int value, int min, int max)
{
	return (value >= min) && (value <= max);
}
