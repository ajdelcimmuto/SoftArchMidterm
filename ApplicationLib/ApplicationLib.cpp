// pch.cpp: source file corresponding to the pre-compiled header

#include "ApplicationLib.h"

// When you are using pre-compiled headers, this source file is necessary for compilation to succeed.
ApplicationLib::ApplicationLib() {
	libName = "ApplicationLib";
}
std::string ApplicationLib::GetLibName() { return libName; }