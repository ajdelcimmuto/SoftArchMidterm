// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the USERINTERFACE_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// USERINTERFACE_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef USERINTERFACE_EXPORTS
#define USERINTERFACE_API __declspec(dllexport)
#else
#define USERINTERFACE_API __declspec(dllimport)
#endif


#include "framework.h"


// This class is exported from the dll
class USERINTERFACE_API CUserInterface {
public:
	CUserInterface(void);
	// TODO: add your methods here.
};

extern USERINTERFACE_API int nUserInterface;

USERINTERFACE_API int fnUserInterface(void);
