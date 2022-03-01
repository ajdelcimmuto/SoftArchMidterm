// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifdef CORE_EXPORTS
#define CORE_API __declspec(dllexport)
#else
#define CORE_API __declspec(dllimport)
#endif

#ifndef CORE_H
#define CORE_H

// add headers that you want to pre-compile here
#include "framework.h"
#include <iostream>

CORE_API void initApplication();
CORE_API void closeApplication();

#endif //CORE_H
