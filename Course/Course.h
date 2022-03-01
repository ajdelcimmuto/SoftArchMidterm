// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifdef COURSE_EXPORTS
#define COURSE_API __declspec(dllexport)
#else
#define COURSE_API __declspec(dllimport)
#endif

#ifndef COURSE_H
#define COURSE_H

// add headers that you want to pre-compile here
#include "framework.h"
#include <string>

COURSE_API std::string GetCourseName();

#endif //COURSE_H
