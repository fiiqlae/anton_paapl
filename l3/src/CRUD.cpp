#include "./CRUD.hpp"

#include "./CheapBar.cpp"

#include <iostream>
#include <vector>
#include <algorithm>

#pragma once

void CRUD::push_back(CheapBar& e) {
    establishments.push_back(e);
}

void CRUD::pop_front() {
    establishments.pop_front();
}

void CRUD::print() 
{ 
    for (auto it = establishments.begin(); it != establishments.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
}