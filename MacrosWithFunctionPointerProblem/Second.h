#pragma once
#include "First.h"
#include <functional>

#undef CLASS_NAME
#define CLASS_NAME "second"

#define PRINT_CLASS_NAME std::cout << "Class name from Macros: " << CLASS_NAME << "\n"

class Second
{
public:
	Second();
	~Second();
};

