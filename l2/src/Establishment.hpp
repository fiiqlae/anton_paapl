#pragma once
#include <iostream>
#include <string>
#include "./Address.cpp"

class Establishment
{
protected:
    long _id;
    std::string _name;
    Address _address;
    bool _is_underage_drinking_allowed;
public:
    Establishment();
    Establishment(std::string name, std::string street_name, int building, bool children);
    Establishment(const Establishment &e);

    std::string get_name();
    long get_id();
    bool is_underage_drinking_allowed();
    void set_underage_drinking_allowed(bool v);
    Address get_address();

    bool operator == (const Establishment &e);
    friend std::ostream& operator<< (std::ostream& os, Establishment& t);
    friend std::istream& operator>> (std::istream& is, Establishment& t);
};