#include "./Establishment.hpp"
#include <iostream>
#include <chrono>
#include <stdlib.h>
#include <time.h>

Establishment::Establishment(): 
    _id(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count()),
    _name("canned tuna"), 
    _street_name("midway"), 
    _building(123), 
    _is_underage_drinking_allowed(true) {};

Establishment::Establishment(std::string name, std::string street_name, int building, bool children)
{
    _id = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    _name = name;
    _street_name = street_name;
    _building = building;
    _is_underage_drinking_allowed = children;
}

Establishment::Establishment(const Establishment &e):
    _id(e._id),
    _name(e._name), 
    _street_name(e._street_name), 
    _building(e._building), 
    _is_underage_drinking_allowed(e._is_underage_drinking_allowed) {};

bool Establishment::operator== (const Establishment& e) {
    return this->_name == e._name;
}

std::ostream& operator<< (std::ostream& os, Establishment& e) {
    os << "Establishment " 
       << e._name 
       << " located at " 
       << e._street_name 
       << " st. " 
       << e._building 
       << " underage drinking: " 
       << (e._is_underage_drinking_allowed? "yes" : "no") 
       << " id: " << e._id << std::endl;
    return os;
}

std::istream& operator>> (std::istream& is, Establishment& e) {
    std::string name;
    std::string street_name;
    int building;
    std::string b;
    bool underage_drinking;
    std::cout << "est name: ";
    is >> name;
    std::cout << "est street: ";
    is >>street_name;
    std::cout << "building: ";
    is >> building;
    std::cout << "do children drink? [Y|N] ";
    is >> b;
    underage_drinking = (b == "Y");
    e._name = name;
    e._street_name = street_name;
    e._building = building;
    e._is_underage_drinking_allowed = underage_drinking;
    return is;
}

std::string Establishment::get_name()
{
    return this->_name;
}

std::string Establishment::get_street_name()
{
    return this->_street_name;
}

int Establishment::get_building()
{
    return this->_building;
}

long Establishment::get_id()
{
    return this->_id;
}

bool Establishment::is_underage_drinking_allowed()
{
    return this->_is_underage_drinking_allowed;
}

void Establishment::set_underage_drinking_allowed(bool v)
{
    this->_is_underage_drinking_allowed = v;
}