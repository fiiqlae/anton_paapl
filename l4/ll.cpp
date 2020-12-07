#pragma once

#include "node.cpp"
#include "lli.cpp"

#include <algorithm>
#include <iostream>
#include <memory>

template <typename T>
class LinkedList
{
    typedef Node<T> node;

    std::size_t size;
    std::unique_ptr<node> head;
    std::unique_ptr<node> tail;

    void init()
    {
        size = 0;
        head.reset(new node);
        tail.reset(new node);
        head->next = tail.get();
    }

public:
    typedef LinkedListIterator<node> iterator;
    typedef LinkedListIterator<const node> const_iterator;

    LinkedList() { init(); }

    ~LinkedList()
    {
        std::cout << "nothing to worry about \n";
    }

    void push_back(const T &value)
    {
        node *n = new node(value);
        n->next = head->next;
        n->next->previous = n; 
        head->next = n;
        n->previous = head.get();
        size++;
    }
    
    void push_front(const T &value)
    {
        node *n = new node(value);
        node *tmp = head.get();
        while(tmp->next != tail.get()) tmp = tmp->next;
        tmp->next = n;
        n->previous = tmp;
        n->next = tail.get();
        tail.get()->previous = n;
        size++;
    }

    int get_size() const
    { 
        return size;
    }

    iterator begin() 
    {
        return iterator(head->next);
    }

    iterator end()
    {
        return iterator(tail.get());
    }

    void clear()
    {
        init();
    }

    void print() 
    {
        std::cout << "list size: " << size << std::endl;
        if(size == 0)
        {
            std::cout << "list is empty" << std::endl;
            return;
        }
        iterator i = begin();
        while (i != end())
        {
            std::cout << i.p->data << std::endl;
            i++;
        }
    }

};
