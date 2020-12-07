#include <iostream>
#include "./ChildException1.cpp"
#include "./ChildException2.cpp"

void failing_1()
{
    try
    {
        const char* q = "message 1";
    	throw ChildException1(q);
    }
    catch (std::exception& e)
    {
    	std::cout << e.what() << std::endl;
    }
}

void failing_2()
{
    try
    {
        const char* q = "message 2";
    	throw ChildException2(q);
    }
    catch (std::exception& e)
    {
    	std::cout << e.what() << std::endl;
    }
}

int main()
{
    failing_1();
    failing_2();
    return 0;
}