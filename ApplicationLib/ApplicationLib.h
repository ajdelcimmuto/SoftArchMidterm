// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifdef APPLICATIONLIB_EXPORTS
#define APPLICATIONLIB_API __declspec(dllexport)
#else
#define APPLICATIONLIB_API __declspec(dllimport)
#endif

#ifndef APPLICATIONLIB_H
#define APPLICATIONLIB_H

// add headers that you want to pre-compile here
#include "framework.h"
#include <iostream>
#include "../Assignment/Assignment.h"
#include "../Course/Course.h"
#include "../Login/Login.h"
#include "../UserInformation/UserInformation.h"

APPLICATIONLIB_API void performAction(int choice);

#endif //APPLICATIONLIB_H
