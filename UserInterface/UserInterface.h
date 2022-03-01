// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef USERINTERFACE_H
#define USERINTERFACE_H

// add headers that you want to pre-compile here
#include "framework.h"
#include "../Core/Core.h"
#include <string>
class UserInterface
{
	bool quit;

public:
	UserInterface();
	void useApp();
};

#endif //USERINTERFACE_H
