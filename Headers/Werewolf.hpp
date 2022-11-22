#ifndef WEREWOLF_HPP
#define WEREWOLF_HPP

#include <iostream>
#include "Human.hpp"
#include "Wolf.hpp"

class Werewolf : public Human,public Wolf {
    public:
        Werewolf(std::string name);
        ~Werewolf();
        void speak();
};

#endif