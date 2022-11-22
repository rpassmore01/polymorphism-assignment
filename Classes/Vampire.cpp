#include "../Headers/Vampire.hpp"
#include "../Headers/Human.hpp"
#include <iostream>

using namespace std;

Vampire::Vampire(string n): Human(n){}

Vampire::~Vampire() {
    cout << name << " the Vampire has been deleted." << endl;
}

void Vampire::speak(){
    cout << "I'm going to suck your blood." << endl;
}