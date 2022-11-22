#ifndef CITIZEN_HPP
#define CITIZEN_HPP

#include <iostream>

class Citizen {
    public:
        std::string name;
        Citizen();
        Citizen(std::string name);
        virtual ~Citizen();
        virtual void payTaxes();
        virtual void speak();
};

#endif