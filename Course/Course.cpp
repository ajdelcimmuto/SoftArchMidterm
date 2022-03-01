// pch.cpp: source file corresponding to the pre-compiled header

#include "Course.h"

// When you are using pre-compiled headers, this source file is necessary for compilation to succeed.
Course::Course() {
	libName = "ApplicationLib";
}
std::string Course::getCourseLibName() { return libName; }