#pragma once
class Clock
{

public:

	//Class member modifier functions Getters/Setters
	inline int GetHour() {return hour;}
	inline int GetMinute() {return minute;}
	inline int GetSecond() {return second;}
	inline int GetMenuSelection() {return menuSelection;}

	inline void SetHour(int hour) {this->hour = hour;}
	inline void SetMinute(int minute) {this->minute = minute;}
	inline void SetSecond(int second) {this->second = second;}

	inline void AddHour(int hour) {this->hour += hour;}
	inline void AddMinute(int minute) {this->minute += minute;}
	inline void AddSecond(int second) {this->second += second;}

	//Print Functions
	void PrintMenu();

	void Print12HourClock();

	void Print24HourClock();

	//Input Functions
	int UserMenuSelection();
	bool ValidateInput(int input);

protected:
	int hour = 0;

	int minute = 0;

	int second = 0;

	int menuSelection = 0;

private:


};

