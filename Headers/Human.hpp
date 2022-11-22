#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include "Citizen.hpp"

class Human : public Citizen {
    public:
        Human(std::string name);
        ~Human();
        virtual void payTaxes();
        virtual void speak();
};

#endif