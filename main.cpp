#include <iostream>

#include "choices.hpp" // dialogue
#include "classes.hpp" // player class
#include "battle.hpp" // battle sequence

using namespace std;

int main(){

    string chosenCharacter = "";

    /* string a = "a";
    cout << "enter: " << endl;
    cin >> a;
    cin.clear(); */

    if(Choice("Tyr") == false){
        Tyr one;
        chosenCharacter = "Tyr";
        initiateBattle(chosenCharacter, one.alive, one.attack, one.heavyAttack, one.health, one.defense, one.speed);
        cout << "hi" << endl;
        
    } else if(Choice("Thor") == true){
        Thor one;
        chosenCharacter = "Thor";
        initiateBattle(chosenCharacter, one.alive, one.attack, one.magicAttack, one.health, one.defense, one.speed);
        cout << "hi 2" << endl;
    }

// more dialogue, rn its just a boss fight


  // update health
  // battle fight
  // dialogue

}