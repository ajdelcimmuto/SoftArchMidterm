// pch.cpp: source file corresponding to the pre-compiled header
#include "ApplicationLib.h"
#include <boost/locale.hpp>
#include <iostream>

using namespace std;
using namespace boost::locale;

// When you are using pre-compiled headers, this source file is necessary for compilation to succeed.
APPLICATIONLIB_API void performAction(int choice) {

	generator gen;

	// Specify location of dictionaries
	// TODO: CHANGE THIS PATH TO YOUR LOCAL MACHINE!!!!!!!!!!
	gen.add_messages_path("C:\\Users\\ajdel\\Downloads\\HomeworkApp\\ApplicationLib");
	gen.add_messages_domain("hello");

	// Generate locales and imbue them to iostream
	locale::global(gen("de_DE.UTF - 8"));
	//locale::global(gen(""));

	cout.imbue(locale());
	const string context = "test";

	switch (choice)
	{
	case 2:
		cout << translate(context, GetLoginName()) << endl << endl;
		break;
	case 3:
		cout << translate(context, GetAssignmentName()) << endl << endl;
		break;
	case 4:
		cout << translate(context, GetCourseName()) << endl << endl;
		break;
	case 5:
		cout << translate(context, GetUserInformationName()) << endl << endl;
		break;
	default:
		break;
	}
};