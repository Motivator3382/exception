#include <string>
#include "Exception.h"

//Exception::Exception(const char* message)
//{
//    strcpy_s(m_message, message);
//}

Exception::Exception(std::string message)
{
    out_message = message;
}

string Exception::GetMessage() const
{
    return out_message;
}