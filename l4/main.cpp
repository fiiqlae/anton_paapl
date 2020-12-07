#include <iostream>
#include "ll.cpp"
#include "lli.cpp"

class A {
public:
    int x;
    A(): x(0) {};
    A(int v): x(v) {};
    friend std::ostream& operator<<(std::ostream& os, const A& a)
    {
        os << a.x << std::endl;
        return os;
    }
};

int main() 
{
    LinkedList<A> list;
    A a1 = A(1);
    A a2 = A(2);
    A a3 = A(3);
    list.push_back(a1);
    list.push_back(a2);
    list.push_back(a3);
    list.print();
    std::cout << "size " << list.get_size() << std::endl;
    list.clear();
    std::cout << "---\n";
    list.print();
    std::cout << "---\n";
    list.push_front(a1);
    list.push_front(a2);
    list.push_front(a3);
    list.print();
    return 0;    
}
