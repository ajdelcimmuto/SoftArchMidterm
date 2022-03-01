#pragma once

#ifdef ASSIGNMENT_EXPORTS
#define ASSIGNMENT_API __declspec(dllexport)
#else
#define ASSIGNMENT_API __declspec(dllimport)
#endif

#include <string>
#include "framework.h"

ASSIGNMENT_API std::string GetAssignmentName();

