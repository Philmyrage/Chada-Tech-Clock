/*
	Created by: Phillip Wood
	Date: 11/16/24
*/

#include <Windows.h>
#include "Clock.h"

// I do not personally use the "using namespace" declaration because it's bad practice, or so I have been told. 

int main() {

	SYSTEMTIME st;
	GetSystemTime(&st);
	Clock* c = new Clock(st.wHour, st.wMinute, st.wSecond);

	c->PrintClock();
	c->PrintMenu();
	
	return 0;
}