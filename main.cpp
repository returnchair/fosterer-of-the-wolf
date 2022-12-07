#include <iostream>

#include "choices.hpp" // dialogue
#include "classes.hpp" // player class
#include "battle.hpp" // battle sequence

using namespace std;

int main(){

    string chosenCharacter = "";

// temp code in main.cpp until we figure out bosses/enemies
// because initiateBattle function can be universally used
// we can have two seperate realms the player can enter with either boss in either one

// battle.cpp logic:
// battles are done within one function spraeding across many functions such as a fight sequence
// battle.cpp will include a check to see if there's any skillpoints left
// battle.cpp will also include a health check for both the boss and player

    Intro(); // intro sequence
    if(Choice("Tyr") == false){
        Tyr one;
        chosenCharacter = "Tyr";
        
    } else if(Choice("Thor") == true) {
        Thor one;
        chosenCharacter = "Thor";
    }

    // rest of the game vvv | more dialogue? seems lackluster

    if(realmChoice() == "Midgard" || realmChoice == "midgard"){
        Jormungandr two;

        SnakeIntro();
        initiateBattle(chosenCharacter, one.alive, one.attack, one.heavyAttack, one.health, one.defense, one.speed, two.health, two.heavyAttack);
        
    } else { // Hel
        Garm two;

        GarmIntro();
        initiateBattle(chosenCharacter, one.alive, one.attack, one.heavyAttack, one.health, one.defense, one.speed);
    }
}

if(chosenCharacter == "Tyr"){
    TyrEnding();
} else if (chosenCharacter == "Thor"){
    ThorEnding();
}