#include "./CheapBar.cpp"
#include <deque>

#pragma once

using namespace std;

class CRUD {
    deque<CheapBar> establishments;
public:
    void push_back(CheapBar& t);
    void pop_front();
    void print();
};