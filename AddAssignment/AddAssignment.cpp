// AddAssignment.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "AddAssignment.h"

#include <string>

// This is an example of an exported variable
ADDASSIGNMENT_API int nAddAssignment=0;

// This is an example of an exported function.
ADDASSIGNMENT_API int fnAddAssignment(void)
{
    return 0;
}

ADDASSIGNMENT_API std::string addAssignmentName(std::string aName)
{
    return "Assignment " + aName + " has been added successfully.";
}

// This is the constructor of a class that has been exported.
CAddAssignment::CAddAssignment()
{
    return;
}
