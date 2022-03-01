// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifdef USERINFORMATION_EXPORTS
#define USERINFORMATION_API __declspec(dllexport)
#else
#define USERINFORMATION_API __declspec(dllimport)
#endif

#ifndef USERINFORMATION_H
#define USERINFORMATION_H

// add headers that you want to pre-compile here
#include "framework.h"
#include <string>

USERINFORMATION_API std::string GetUserInformationName();

#endif //USERINFORMATION_H
