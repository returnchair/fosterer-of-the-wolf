#include <iostream>

#include "choices.hpp" // dialogue
#include "classes.hpp" // player class
#include "battle.hpp" // battle sequence

using namespace std;

int main(){

    string chosenCharacter = "";

// battle.cpp logic:
// battles are done within one function spraeding across many functions such as a fight sequence
// battle.cpp will include a check to see if there's any skillpoints left
// battle.cpp will also include a health check for both the boss and player

// to do list

// updateStatus for ether & health
// ensure that endings are met
// dialogue is fixed
// ascii art 


    if(realmTravel() == "Midgard" || realmTravel() == "midgard"){
        Thor one;
        chosenCharacter = "Thor";
        Jormungandr two;

        SnakeIntro();
        initiateBattle(chosenCharacter, one.alive, one.attack, one.magicAttack, one.health, one.defense, one.speed, two.health, two.attack, two.heavyAttack);
        
    } else if(realmTravel() == "Hel" || realmTravel() == "hel") { // Hel
        Tyr one;
        chosenCharacter = "Tyr";
        Garm two;

        GarmIntro();
        initiateBattle(chosenCharacter, one.alive, one.attack, one.heavyAttack, one.health, one.defense, one.speed, two.health, two.attack, two.heavyAttack);
    }

if(chosenCharacter == "Tyr"){
    TyrEnding();
} else if (chosenCharacter == "Thor"){
    ThorEnding();
}
}