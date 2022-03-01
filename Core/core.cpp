// pch.cpp: source file corresponding to the pre-compiled header

#include "Core.h"

Core::Core() {

}

// Quit[1], Login[2], Assignment[3], Course[4], UserInformation[5]
void Core::performAction(int choice) {
	switch (choice)
	{
	case 2:
		Assignment a = Assignment();
		std::cout << a.GetLibName();
		break;
	case 3:
		Login l = Login();
		std::cout << l.GetLibName();
	case 4:
		Course c = Course();
		std::cout << c.GetLibName();
	case 5:
		UserInformation u = UserInformation();
		std::cout << u.GetLibName();
	default:
		break;
	}
}
// When you are using pre-compiled headers, this source file is necessary for compilation to succeed.
