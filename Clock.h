#pragma once
class Clock
{

public:
	
	//Constructor/Destructor to set default values and clean up.
	Clock(int h, int m, int s) : hour(h), minute(m), second(s) {

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

	void PrintClock();

	//Input Functions
	int UserMenuSelection();
	bool ValidateInputAndExecuteOperation(int input);

protected:
	int hour = 0;

	int minute = 0;

	int second = 0;

	int menuSelection = 0;

	int quitOption = 4;

private:


};

