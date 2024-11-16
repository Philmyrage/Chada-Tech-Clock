#pragma once
class Clock
{

public:
	
	Clock()
	{

	}

	//Constructor override to set default values.
	Clock(int h, int m, int s) : hour(h), minute(m), second(s) 
	{

	}

	//Class member modifier functions Getters/Setters
	inline int GetHour() {return hour;}
	inline int GetMinute() {return minute;}
	inline int GetSecond() {return second;}
	inline int GetMenuSelection() {return menuSelection;}
	inline int GetQuitOption() {return quitOption;}

	inline void SetHour(int hour) {this->hour = hour;}
	inline void SetMinute(int minute) {this->minute = minute;}
	inline void SetSecond(int second) {this->second = second;}

	void AddHour(int hour);
	void AddMinute(int minute); 
	void AddSecond(int second);

	//Print Functions
	void PrintMenu();

	//Prints the 12 and 24 hour clock times.
	void PrintClocks();

	//Input Functions

	//Prints a selection line and gets the user input, it will loop until user chooses a correct option.
	int UserMenuSelection();

	//This function validates the user input and also Executes the chosen operation based on input.
	bool ValidateInputAndExecuteOperation(int input);

protected:
	int hour = 0;

	int minute = 0;

	int second = 0;

	int menuSelection = 0;

	int quitOption = 4;

private:


};

