#include "pch.h"
#include "CppUnitTest.h"
#include "../AddAssignment/AddAssignment.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string expectedOutput = "Assignment First has been added successfully.";
			Assert::AreEqual(expectedOutput, std::string(addAssignmentName("First")));
		}
	};
}
