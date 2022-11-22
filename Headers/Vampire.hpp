#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include <iostream>
#include "Human.hpp"

class Vampire : public Human {
    public:
        Vampire(std::string name);
        ~Vampire();
        virtual void speak();
};

#endif