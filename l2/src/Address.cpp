#pragma once
#include <iostream>

class Address
{
private:
    std::string _street_name;
    int _building; 
public:

    Address(): _building(0), _street_name("pep") {};

    Address(std::string street_name, int building)
    {
        _street_name = street_name;
        _building = building;
    }

    std::string get_street_name()
    {
        return this->_street_name;
    }

    int get_building()
    {
        return this->_building;
    }
};