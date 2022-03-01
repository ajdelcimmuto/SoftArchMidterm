// UserInterface.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "UserInterface.h"
#include <iostream>


UserInterface::UserInterface() {
	quit = false;
}

void UserInterface::useApp() {
	Core c = Core();
	while (quit) {
		int choice = 0;
		std::cout << "What would you like to do? Enter the number of the option you wish to select.\n";
		std::cout << "Quit[1], Login[2], Assignment[3], Course[4], UserInformation[5]\n";
		std::cin >> choice;
		if (choice != 1) {
			c.performAction(choice);
		}
		else {
			quit = true;
		}
	}
}

