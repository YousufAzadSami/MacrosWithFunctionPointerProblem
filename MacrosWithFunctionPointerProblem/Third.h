#pragma once
#include "First.h"

#undef CLASS_NAME
#define CLASS_NAME "third"

#define PRINT_CLASS_NAME std::cout << "Class name from Macros: " << CLASS_NAME << "\n"

class Third
{
public:
	Third();
	~Third();
};

