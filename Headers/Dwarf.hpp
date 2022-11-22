#ifndef DWARF_HPP
#define DWARF_HPP

#include <iostream>
#include "Citizen.hpp"

class Dwarf : public Citizen {
    public:
        Dwarf(std::string name);
        ~Dwarf();
        virtual void payTaxes();
        virtual void speak();
};

#endif