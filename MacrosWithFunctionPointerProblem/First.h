#pragma once
#include <iostream>
#include <functional>

#undef CLASS_NAME 
#define CLASS_NAME "first"

//#define PRINT_CLASS_NAME std::cout << "Class name from Macros: " << CLASS_NAME << "\n"

class First
{
public:
	First();
	~First();

	void printClassName();
	void setPrintClassName(std::function<void()> inFunctionPointer);

	std::function<void()> mPrintClassFromSecond;
};

