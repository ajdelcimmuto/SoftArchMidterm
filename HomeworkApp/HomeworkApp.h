#pragma once

#include "../Assignment/Assignment.h"
#include <vector>
#include <string>

class HomeworkApp {
	Assignment assignment;
	std::vector<Assignment> agendaVect;

public:

	HomeworkApp(Assignment assignment);
	void addAssignment(int assignmentNumber, std::string dueDate, std::string course);
	void printAssignments();
	int getAssignmentCount();
	Assignment removeOldestAssignment();
};


