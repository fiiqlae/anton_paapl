#include "./CheapBar.cpp"
#include <vector>

#pragma once

using namespace std;

class CRUD {
    vector<CheapBar> establishments;
public:
    void add(CheapBar& t);
    void update(long id);
    CheapBar get(long id);
    void delete_record(long id);
    void print();
    void sort_by_id();
    void sort_by_name();
};