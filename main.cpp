#include "Headers/Werewolf.hpp"
#include "Headers/Human.hpp"
#include "Headers/Vampire.hpp"
#include "Headers/Troll.hpp"
#include "Headers/Zombie.hpp"
#include "Headers/Dwarf.hpp"
#include "Headers/Nobbs.hpp"
#include "Headers/Citizen.hpp"
#include "vector"
#include <iostream>

using namespace std;

int main(){
    Citizen *Alexa = new Werewolf("Alexa");
    Citizen *Monique = new Human("Monique");
    Citizen *Jada = new Vampire("Jada");
    Citizen *Lexie = new Troll("Lexi");
    Citizen *Yael = new Zombie("Yael");
    Citizen *Destiny = new Dwarf("Destiny");
    Citizen *Alex = new Nobbs("Alex");

    Citizen* peopleArr[7] = {Alexa, Monique, Jada, Lexie, Yael, Destiny, Alex};

    for(int i = 0; i < 6; i++){
        peopleArr[i]->speak();
        peopleArr[i]->payTaxes();
        delete peopleArr[i];
        cout << endl;
    }


}