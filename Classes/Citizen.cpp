#include "../Headers/Citizen.hpp"
#include <iostream>

using namespace std;

Citizen::Citizen(){}

Citizen::Citizen(string n){
    name = n;
}

Citizen::~Citizen(){
    cout << name << " has been deleted" << endl;
}

void Citizen::payTaxes(){
    cout << "Base class citizen can't pay taxes." << endl;
}

void Citizen::speak(){
    cout << "Base class citizen can't speak." << endl;
}