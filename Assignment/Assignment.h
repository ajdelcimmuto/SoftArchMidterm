#pragma once

#include <string>

class Assignment
{
	int assignmentNumber;
	std::string dueDate;
	std::string course;

public:

	Assignment();
	Assignment(int a, std::string d, std::string c);

	virtual int GetAssignmentNumber();
	virtual void SetAssignmentNumber(int a);

	virtual std::string GetDueDate();
	virtual void SetDueDate(std::string d);

	virtual std::string GetCourse();
	virtual void SetCourse(std::string c);

	virtual void SetAll(int a, std::string d, std::string c);

};

