#include "./Establishment.hpp"
#include "./Establishment.hpp"
#include <vector>

#pragma once

using namespace std;

class CRUD {
    vector<Establishment> establishments;
public:
    void add(Establishment& t);
    void update(long id);
    Establishment get(long id);
    void delete_record(long id);
    void print();
    void sort_by_id();
    void sort_by_name();
};