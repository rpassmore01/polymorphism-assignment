#ifndef NOBBS_HPP
#define NOBBS_HPP

#include <iostream>
#include "Human.hpp"

class Nobbs : public Human {
    public:
        Nobbs(std::string name);
        ~Nobbs();
        virtual void speak();
};

#endif