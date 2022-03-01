// pch.cpp: source file corresponding to the pre-compiled header

#include "Course.h"

// When you are using pre-compiled headers, this source file is necessary for compilation to succeed.
COURSE_API std::string GetCourseName() { return "Course"; }