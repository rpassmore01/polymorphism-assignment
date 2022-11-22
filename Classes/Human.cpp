#include "../Headers/Human.hpp"
#include "../Headers/Citizen.hpp"
#include <iostream>

using namespace std;

Human::Human(string n): Citizen(n){}

Human::~Human() {
    cout << name << " the human has been deleted." << endl;
}

void Human::payTaxes(){
    cout << name << ", who is a human, has paid $50 in taxes." << endl;
}

void Human::speak(){
    cout << "Hello, my name is " << name << ". I am a human." << endl;
}