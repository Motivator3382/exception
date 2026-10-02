#pragma once
#include <string>
using namespace std;

class Exception
{
protected:

    string out_message;

public:

    //Exception(const char* message);
    Exception(string message);

    string GetMessage() const;
};