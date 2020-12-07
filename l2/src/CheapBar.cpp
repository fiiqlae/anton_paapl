#pragma once

#include "./Establishment.hpp"
#include <iostream>

class CheapBar : public Establishment
{
private:
    int _customers_kidnapped;
public:
    CheapBar() : Establishment(), _customers_kidnapped(0) {};
    CheapBar(std::string name, std::string street_name, int building, bool children, int customers_kidnapped):
        Establishment(name, street_name, building, children)
    {
        _customers_kidnapped = customers_kidnapped;
    }

    friend std::ostream& operator<< (std::ostream& os, CheapBar& e) {
        os << "Cheap Bar " 
           << e._name 
           << " located at " 
           << e._address.get_street_name() 
           << " st. " 
           << e._address.get_building() 
           << " underage drinking: " 
           << (e._is_underage_drinking_allowed? "yes" : "no") 
           << " customers kidnapped " 
           << e.get_customers_kidnapped() 
           << " id: " << e._id << std::endl;
        return os;
    }

    friend std::istream& operator>> (std::istream& is, CheapBar& e) {
        std::string name;
        std::string street_name;
        int building;
        int kc;
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
        std::cout << "how many customeres were kidnapped here? ";
        is >> kc;
        underage_drinking = (b == "Y");
        e._name = name;
        e._address = Address(street_name, building);
        e._is_underage_drinking_allowed = underage_drinking;
        e._customers_kidnapped = kc;
        return is;
    }

    void kidnap_customer()
    {
        this->_customers_kidnapped++;
    }
    int get_customers_kidnapped()
    {
        return this->_customers_kidnapped;
    }
};