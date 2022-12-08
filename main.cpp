#include <iostream>

#include "choices.hpp" // dialogue
#include "classes.hpp" // player class
#include "battle.hpp" // battle sequence

using namespace std;

int main(){

    string chosenCharacter = "";

// to do list

// updateStatus for ether & health + done
// ensure that endings are met + done
// dialogue is fixed + done
// ascii art 


    if(realmTravel() == "Midgard" || realmTravel() == "midgard"){
        Thor one;
        chosenCharacter = "Thor";
        Jormungandr two;

        // cout << one.alive << " " << one.attack << " " << one.magicAttack << " " << one.health << " " << one.defense << " " << one.speed << " " << two.health << " " << two.attack << " " << two.heavyAttack << endl;

        SnakeIntro();
        initiateBattle(chosenCharacter, one.alive, one.attack, one.magicAttack, one.health, one.defense, one.speed, two.health, two.attack, two.heavyAttack, "Jormungandr");
        
    } else if(realmTravel() == "Hel" || realmTravel() == "hel") { // Hel
        Tyr one;
        chosenCharacter = "Tyr";
        Garm two;

        // cout << one.alive << " " << one.attack << " " << one.heavyAttack << " " << one.health << " " << one.defense << " " << one.speed << " " << two.health << " " << two.attack << " " << two.heavyAttack << endl;

        GarmIntro();
        initiateBattle(chosenCharacter, one.alive, one.attack, one.heavyAttack, one.health, one.defense, one.speed, two.health, two.attack, two.heavyAttack, "Garm");
    }

// yes it's rigged

if(chosenCharacter == "Tyr"){
    TyrEnding();
} else if (chosenCharacter == "Thor"){
    ThorEnding();
}
}