// pch.cpp: source file corresponding to the pre-compiled header

#include "Login.h"

LOGIN_API std::string GetLoginName() {
	return "Login";
}
// When you are using pre-compiled headers, this source file is necessary for compilation to succeed.
