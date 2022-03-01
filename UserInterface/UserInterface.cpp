// UserInterface.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "UserInterface.h"
#include <iostream>

USERINTERFACE_API void useApp() {
	bool quit = false;
	while (!quit) {
		int choice = 0;
		std::cout << "What would you like to do? Enter the number of the option you wish to select.\n";
		std::cout << "Quit[1], Login[2], Assignment[3], Course[4], UserInformation[5]\n";
		std::cin >> choice;

		while (choice > 5 || choice < 1) {
			std::cout << "Invalid choice, please choose again.\n";
			int newChoice = 0;
			std::cout << "What would you like to do? Enter the number of the option you wish to select.\n";
			std::cout << "Quit[1], Login[2], Assignment[3], Course[4], UserInformation[5]\n";
			std::cin >> newChoice;
			choice = newChoice;
		}
		if (choice != 1) {
			performAction(choice);
		}
		else {
			quit = true;
		}
	}
}

