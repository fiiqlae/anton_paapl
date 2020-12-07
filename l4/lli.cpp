#pragma once

#include "ll.cpp"
#include "node.cpp"

template <typename T>
class LinkedList;

template <typename TNode>
class LinkedListIterator
{
    friend class LinkedList<typename TNode::value_type>;
    TNode* p;
public:
    LinkedListIterator(TNode* p) : p(p) {}
    LinkedListIterator(const LinkedListIterator& other) : p(other.p) {}
    void operator++() { p = p->next; }
    void operator++(int) { p = p->next; }
    bool operator==(const LinkedListIterator& other) { return p == other.p; }
    bool operator!=(const LinkedListIterator& other) { return p != other.p; }
    const int& operator*() const { return p->data; }
    LinkedListIterator<TNode> operator+(int i)
    {
        LinkedListIterator<TNode> iter = *this;
        while (i-- > 0 && iter.p)
        {
            ++iter;
        }
        return iter;
    }
};
