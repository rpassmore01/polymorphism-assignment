#include "../Headers/Werewolf.hpp"
#include "../Headers/Human.hpp"
#include "../Headers/Wolf.hpp"
#include <iostream>

using namespace std;

Werewolf::Werewolf(string n): Human(n){}

Werewolf::~Werewolf() {
    cout << name << " the Werewolf has been deleted." << endl;
}

void Werewolf::speak(){
    cout <<"Hi I am " << name << " and I am a werewolf." << endl;
}