#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include "Human.hpp"

class Zombie : public Human {
    public:
        Zombie(std::string name);
        ~Zombie();
        virtual void speak();
};

#endif