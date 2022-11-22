#include "../Headers/Nobbs.hpp"
#include "../Headers/Human.hpp"
#include <iostream>

using namespace std;

Nobbs::Nobbs(string n): Human(n){}

Nobbs::~Nobbs() {
    cout << name << " the Nobb was deleted." << endl;
}

void Nobbs::speak(){
    cout << "I'm a Nobb." << endl;
}