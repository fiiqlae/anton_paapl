#include "./CRUD.hpp"

#include "./CheapBar.cpp"

#include <iostream>
#include <vector>
#include <algorithm>

#pragma once

bool comp_name(CheapBar& lhs, CheapBar& rhs) {
   return (lhs.get_name()) < (rhs.get_name());
}

bool comp_id(CheapBar& lhs, CheapBar& rhs) {
   return lhs.get_id() < rhs.get_id();
}

void CRUD::add(CheapBar& e) {
    establishments.push_back(e);
}

void CRUD::update(long id) {
    CheapBar d;
    std::cin >> d;
    for(int i = 0; i < establishments.size(); i++) {
        if(establishments[i].get_id() == id) {
            
            establishments[i] = d;
            return;
        }
    }
}

CheapBar CRUD::get(long id) {
    for(int i = 0; i < establishments.size(); i++) {
        if(establishments[i].get_id() == id) {
            return establishments[i];
        }
    }
}

void CRUD::delete_record(long id) {
    for(int i = 0; i < establishments.size(); i++) {
        if(establishments[i].get_id() == id) {
            // gotta be efficient af, we're in c++, so efficiency and shooting myself in the foot
            establishments[i] = establishments.back();
            establishments.pop_back();
            return;
        }
    }
}

void CRUD::sort_by_id() {
    std::sort(establishments.begin(), establishments.end(), comp_id);
}

void CRUD::sort_by_name() {
    std::sort(establishments.begin(), establishments.end(), comp_name);
}

void CRUD::print() {
    for(auto i = establishments.begin(); i != establishments.end(); i++) {
        cout << *(i.base());
    }
}