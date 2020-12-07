#include "./BaseException.cpp"


class ChildException2 : public BaseException
{
public:
    ChildException2(const char* x) : BaseException(x)
    {
        std::cout << "a child 2 exception has occured\n";
    }
};