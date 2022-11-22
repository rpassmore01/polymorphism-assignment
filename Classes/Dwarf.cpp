#include "../Headers/Dwarf.hpp"
#include "../Headers/Citizen.hpp"
#include <iostream>

using namespace std;

Dwarf::Dwarf(string n): Citizen(n){}

Dwarf::~Dwarf() {
    cout << name << " the dwarf has been deleted." << endl;
}

void Dwarf::payTaxes(){
    cout << name << ", who is a dwarf, has paid 37 gems in taxes." << endl;
}

void Dwarf::speak(){
    cout << "Hello, my name is " << name << ". I am a dwarf." << endl;
}