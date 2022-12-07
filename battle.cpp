#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <iostream>
#include <random>

#include "battle.hpp"
#include "choices.hpp"

using namespace std;
using namespace std::this_thread;   // sleep_for, sleep_until
using namespace std::chrono;        // nanoseconds, system_clock, seconds
                                    // sleep_until(system_clock::now() + seconds(1));
random_device rd;
random_device sp;
uniform_int_distribution<int> skill(1,20);
uniform_int_distribution<int> dist(1,10);

int skillPoints = 50;

double playerHealthOfBattle = health;
double enemyHealthOfBattle = ???;

void initiateBattle(string player, bool alive, double attack, double specialAttack, double health, double defense, double speed){

playerHealthOfBattle = health;
enemyHealthOfBattle = ???;

cout << "First strike!" << endl;

// may need to add variable replacement for attackSequence passing as a parameter
// playerInflictedDmg = attackSequence(attack, specialAttack);

updateHealth(attackSequence(attack, specialAttack), enemyAttack, enemyHeavyAttack);

bool flag = true;
while(flag == true){

string answer = "";
cout << "Continue attack? [Y/N]" << endl;
cin >> answer;

if(answer == "Y" || answer == "y"){
    updateHealth(attackSequence(attack, specialAttack), enemyAttack, enemyHeavyAttack); // reminder to add ascii art 
    continue; 
} else if(updateHealth(attackSequence(attack, specialAttack), enemyAttack, enemyHeavyAttack) == false){
    // player? death sequence
} else{
    cout << player << ", " << "You have been given 50 skillpoints, spend it wisely!" << endl;
    magicalPotions();
    continue; 
}
}
}

double attackSequence(double attack, double specialAttack){
    double inflictedDmg = attack;
    int crit = dist(rd);

    if (crit == 10){
         double inflictedDmg = attack * specialAttack;
         return inflictedDmg;
     } else {
         return inflictedDmg;
      }
}

double enemyAttackSequence(double attack, double heavyAttack){
    double inflictedDmg = attack;
    int crit = dist(rd);

    if (crit == 10){
         double inflictedDmg = attack * heavyAttack;
         return inflictedDmg;
     } else {
         return inflictedDmg;
      }
}

// void function preferred - player's health/ether is a global variable so we can just change it within magicalPotions()

double magicalPotions(double health, double specialAttack){
    double healthEffectiveness = 25 * specialAttack / 0.8;
    double etherEffectiveness = 5 * specialAttack / 1.2;
    string option = "";

    cout << "Items in store: " << "Mark of Health [Restores 25 health], Ether Gel [Restores skill points reservoir by 5]" << endl;
    cout << "\nPlease enter a choice of 1, 2, and so on." << endl;
    cin >> option;

    if(option == "1"){
        skillPoints -= 5;
        playerHealthOfBattle += healthEffectiveness
    } 
    
    else if(option == "2"){
        skillPoints += etherEffectiveness;
    } 
    
    else {
        cout << "You picked nothing so this opening was closed!" << endl;
    }
}

bool updateHealth(double inflictedAttack, double enemyAttack, double enemyHeavyAttack){
    playerHealthOfBattle -= enemyAttackSequence(enemyAttack, enemyHeavyAttack);
    enemyHealthOfBattle -= inflictedAttack;

    // inflictedDmg of boss sequence

if(playerHealthOfBattle <= 0){
    
    return false; // dead
} else {
    return true; // alive
}
}
