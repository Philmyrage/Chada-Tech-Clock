/*
	Created by: Phillip Wood
	Date: 11/16/24
*/

#include <Windows.h>
#include "Clock.h"

// I do not personally use the "using namespace" declaration because it's bad practice, or so I have been told. 

int main() {

	//Getting the current system time to initialize our clock object with current local time.
	SYSTEMTIME st;
	GetLocalTime(&st);

	//Creating our clock object.
	Clock* c = new Clock(st.wHour, st.wMinute, st.wSecond);

	//Program loops until the user enters the sentinel value to stop executing.
	//Created a quitValue class member cause "magic numbers" are bad, if more options are added it can easily be changed.
	while (c->GetMenuSelection() != c->GetQuitOption()) {
		c->PrintClocks();
		c->PrintMenu();
	}
	
	return 0;
}