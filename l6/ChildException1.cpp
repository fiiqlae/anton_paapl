#include "./BaseException.cpp"

class ChildException1 : public BaseException
{
public:
    ChildException1(const char* x) : BaseException(x)
    {
        std::cout << "a child 1 exception has occured\n";
    }
};