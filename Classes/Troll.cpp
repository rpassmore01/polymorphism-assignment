#include "../Headers/Troll.hpp"
#include "../Headers/Citizen.hpp"
#include <iostream>

using namespace std;

Troll::Troll(string n): Citizen(n){}

Troll::~Troll() {
    cout << name << " the troll has been deleted." << endl;
}

void Troll::payTaxes(){
    cout << name << ", who is a troll, has paid 3 gold coins in taxes." << endl;
}

void Troll::speak(){
    cout << "Hello, my name is " << name << ". I am a troll." << endl;
}