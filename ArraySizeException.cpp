#include "ArraySizeException.h"

ArraySizeException::ArraySizeException(string message) : Exception(message)
{}

string ArraySizeException::GetMessage() const
{
    return out_message;
}
