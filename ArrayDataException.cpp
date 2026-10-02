#include "ArrayDataException.h"
#include <string>

//ArrayDataException::ArrayDataException(const char* message) : Exception(message)
//{
//}

ArrayDataException::ArrayDataException(std::string message) : Exception(message)
{
}

string ArrayDataException::GetMessage() const
{
	return out_message;
}
