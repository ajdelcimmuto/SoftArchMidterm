#include "HomeworkApp.h"
#include <iostream>

HomeworkApp::HomeworkApp(Assignment a) {
	assignment = a;
}

void HomeworkApp::addAssignment(int assignmentNumber, std::string dueDate, std::string course) {
	assignment.SetAll(assignmentNumber, dueDate, course);
	agendaVect.push_back(assignment);
}
void HomeworkApp::printAssignments() {
	for (int i = 0; i < agendaVect.size(); i++) {
		std::cout << agendaVect[i].GetDueDate() << " - " << agendaVect[i].GetCourse() << ", " << agendaVect[i].GetAssignmentNumber() << std::endl;
	}
}
int HomeworkApp::getAssignmentCount() {
	return agendaVect.size();
}

Assignment HomeworkApp::removeOldestAssignment() {
	Assignment poppedAssignment = agendaVect[0];
	agendaVect.erase(agendaVect.begin());
	return poppedAssignment;
}

