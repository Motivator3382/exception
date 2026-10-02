#pragma once
#include "Exception.h"

class ArraySizeException : public Exception
{
public:
	ArraySizeException(string message);
	string GetMessage() const;
};

