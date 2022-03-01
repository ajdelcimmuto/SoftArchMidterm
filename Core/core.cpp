// pch.cpp: source file corresponding to the pre-compiled header

#include "Core.h"


// Quit[1], Login[2], Assignment[3], Course[4], UserInformation[5]
CORE_API void performAction(int choice) {

	switch (choice)
	{
	case 2:
		std::cout << GetLoginName() << std::endl << std::endl;
		break;
	case 3:
		std::cout << GetAssignmentName() << std::endl << std::endl;
		break;
	case 4:
		std::cout << GetCourseName() << std::endl << std::endl;
		break;
	case 5:
		std::cout << GetUserInformationName() << std::endl << std::endl;
		break;
	default:
		break;
	}
}
// When you are using pre-compiled headers, this source file is necessary for compilation to succeed.
