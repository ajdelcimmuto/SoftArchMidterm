#include "Assignment.h"

Assignment::Assignment() {
	assignmentNumber = 0;
	dueDate = "01012022";
	course = "n/a";
}

Assignment::Assignment(int a, std::string d, std::string c) {
	assignmentNumber = a;
	dueDate = d;
	course = c;
}

int Assignment::GetAssignmentNumber() { return assignmentNumber; }
void Assignment::SetAssignmentNumber(int a) { assignmentNumber = a; }

std::string Assignment::GetDueDate() { return dueDate; }
void Assignment::SetDueDate(std::string d) { dueDate = d; }

std::string Assignment::GetCourse() { return course; }
void Assignment::SetCourse(std::string c) { course = c; }

void Assignment::SetAll(int a, std::string d, std::string c) { assignmentNumber = a; dueDate = d; course = c; }