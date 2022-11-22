#include "../Headers/Zombie.hpp"
#include "../Headers/Human.hpp"
#include <iostream>

using namespace std;

Zombie::Zombie(string n): Human(n){}

Zombie::~Zombie() {
    cout << name << " the Zombie has been deleted." << endl;
}

void Zombie::speak(){
    cout << "Arghhhh Brains!!" << endl;
}