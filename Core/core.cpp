// pch.cpp: source file corresponding to the pre-compiled header

#include "Core.h"

CORE_API void initApplication() {
	std::cout << "Application is running!\n";
}

CORE_API void closeApplication() {
	std::cout << "Goodbye.\n";
}