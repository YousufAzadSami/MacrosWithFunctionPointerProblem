#include "First.h"


First::First()
{
	std::cout << "Class First : Constructor" << "\n";
}


First::~First()
{
}

void First::printClassName()
{
	std::cout << "Class name from function : " << CLASS_NAME << "\n";
}

void First::setPrintClassName(std::function<void()> inFunctionPointer)
{
	mPrintClassFromSecond = inFunctionPointer;
}
