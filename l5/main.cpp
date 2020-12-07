#include "./file_manager.cpp"
#include <iostream>
#include <string.h>

class A
{
    private:
        long l;
        char arr[10];
    public:
        A() {}

        void init()
        {
            l = 10; 
            strcpy(arr,"nicestring");
        }
        void print()
        {
            std::cout << l << " " << arr << std::endl;
        }
};

class B
{
    private:
        long l;
        char arr[4];
    public:
        B() {}

        void init()
        {
            l = 20; 
            strcpy(arr,"2b2t");
        }
        void print()
        {
            std::cout << l << " " << arr << std::endl;
        }
};

int main()
{
    A a;
    B b;
    FileManager<A> fm("A.bin");
    FileManager<B> fm1("B.bin");
    a.init();
    b.init();
    fm.write_object(a);
    fm1.write_object(b);
    A t = fm.read_object();
    B t1 = fm1.read_object();
    std::cout << "read: ";
    t.print();
    std::cout << "expected: ";
    a.print();
    std::cout << "read: ";
    t1.print();
    std::cout << "expected: ";
    b.print();
    return 0;
}