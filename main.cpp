/*
	Created by: Phillip Wood
	GitHub: https://github.com/Philmyrage/Chada-Tech-Clock
	Date: 11/16/24
*/

#include <iostream>
#include "Clock.h"

// I do not personally use the "using namespace" declaration because it's bad practice, or so I have been told. 


int main() {
	
	Clock* c = new Clock();
	c->UserInitialValues();

	//Program loops until the user enters the sentinel value to stop executing.
	//Created a quitValue class member cause "magic numbers" are bad, if more options are added it can easily be changed.
	while (c->GetMenuSelection() != c->GetQuitOption()) {
		c->PrintClocks();
		c->PrintMenu();
	}
	
	return 0;
}