#pragma once

#include "ll.cpp"
#include "lli.cpp"

template <typename T>
class Node
{
    friend class LinkedList<T>;
    friend class LinkedListIterator<Node<T>>;
    friend class LinkedListIterator<const Node<T>>;

    Node() : next(nullptr) {}
    Node(const T &data) : data(data), next(nullptr), previous(nullptr) {}
    Node<T> *next;
    Node<T> *previous;
    T data;
public:
    typedef T value_type;
};
