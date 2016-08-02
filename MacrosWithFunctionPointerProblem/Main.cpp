// MacrosWithFunctionPointerProblem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// after including First.h the CLASS_NAME macro value for this class is "first"
#include "First.h"
// after including Second.h the CLASS_NAME macro value for this class is "second"
#include "Second.h"
//// after including Third.h the CLASS_NAME macro value for this class is "third"
//#include "Third.h"

#undef CLASS_NAME
#define CLASS_NAME "main"

int _tmain(int argc, _TCHAR* argv[])
{
	First _first;
	_first.printClassName();
	_first.setPrintClassName([](){ PRINT_CLASS_NAME; });
	_first.setPrintClassName([](){ std::cout << "Class name from Macros: " << CLASS_NAME << "\n"; });
	//_first.setPrintClassName([](){ std::cout << "Class name from Macros: " << "main" << "\n"; });
	//_first.setPrintClassName(PRINT_CLASS_NAME;);
	_first.mPrintClassFromSecond();

	Second _second;
	
	std::getchar();
	return 0;
}

