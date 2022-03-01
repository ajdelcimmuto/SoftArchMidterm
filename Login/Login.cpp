// pch.cpp: source file corresponding to the pre-compiled header

#include "Login.h"

Login::Login() {
	libName = "Login";
}

std::string Login::GetLibName() {
	return libName;
}
// When you are using pre-compiled headers, this source file is necessary for compilation to succeed.
