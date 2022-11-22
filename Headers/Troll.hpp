#ifndef TROLL_HPP
#define TROLL_HPP

#include <iostream>
#include "Citizen.hpp"

class Troll : public Citizen {
    public:
        Troll(std::string name);
        ~Troll();
        virtual void payTaxes();
        virtual void speak();
};

#endif