#pragma once
#include "Exception.h"

class ArrayDataException : public Exception
{
public:
	//ArrayDataException(const char* message);
	ArrayDataException(std::string message);
	string GetMessage() const;
};

