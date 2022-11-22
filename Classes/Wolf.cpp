#include "../Headers/Wolf.hpp"
#include <iostream>

using namespace std;

Wolf::Wolf(){};

Wolf::~Wolf(){
    cout << "A wolf has been deleted." << endl;
}

void Wolf::growl(){
    cout << "The wolf growled." << endl;
}

void Wolf::howl(){
    cout << "The wolf howled." << endl;
}