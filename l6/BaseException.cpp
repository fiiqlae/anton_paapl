#pragma once

#include <exception>

class BaseException : public std::exception
{
    const char* custom_message;
public:
    BaseException(const char* x) : custom_message(x) {};

	const char * what () const throw ()
    {
        std::cout << "base exception has occured\n";
    	return custom_message;
    }
};
