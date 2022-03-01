// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the ADDASSIGNMENT_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// ADDASSIGNMENT_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ADDASSIGNMENT_EXPORTS
#define ADDASSIGNMENT_API __declspec(dllexport)
#else
#define ADDASSIGNMENT_API __declspec(dllimport)
#endif

#include <string>

// This class is exported from the dll
class ADDASSIGNMENT_API CAddAssignment {
public:
	CAddAssignment(void);
	// TODO: add your methods here.
};

extern ADDASSIGNMENT_API int nAddAssignment;

ADDASSIGNMENT_API int fnAddAssignment(void);

ADDASSIGNMENT_API std::string addAssignmentName(std::string aName);