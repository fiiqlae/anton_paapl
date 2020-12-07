#pragma once
#include <iostream>
#include <string>

class Establishment
{
private:
    long _id;
    std::string _name;
    std::string _street_name;
    int _building;
    bool _is_underage_drinking_allowed;
public:
    Establishment();
    Establishment(std::string name, std::string street_name, int building, bool children);
    Establishment(const Establishment &e);

    std::string get_name();
    std::string get_street_name();
    int get_building();
    long get_id();
    bool is_underage_drinking_allowed();

    void set_underage_drinking_allowed(bool v);

    bool operator == (const Establishment &e);
    friend std::ostream& operator<< (std::ostream& os, Establishment& t);
    friend std::istream& operator>> (std::istream& is, Establishment& t);
};