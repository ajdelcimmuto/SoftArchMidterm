// pch.cpp: source file corresponding to the pre-compiled header

#include "UserInformation.h"

UserInformation::UserInformation() {
	libName = "UserInformation";
}

std::string UserInformation::GetLibName() {
	return libName;
}
