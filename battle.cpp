//Made by (mostly) Joshua and Bobby. As well as battle.hpp
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

double playerHealthOfBattle = 1;
double enemyHealthOfBattle = 1;

void initiateBattle(string player, bool alive, double attack, double specialAttack, double health, double defense, double speed, double enemyHealth, double enemyAttack, double enemyHeavyAttack){

playerHealthOfBattle = health;
enemyHealthOfBattle = enemyHealth;

cout << "You strike first!" << endl;

// may need to add variable replacement for attackSequence passing as a parameter

double playerInflictedDmg = attackSequence(attack, specialAttack);
updateHealth(playerInflictedDmg, enemyAttack, enemyHeavyAttack);

cout << "\nEnemy current health is now: " << enemyHealthOfBattle << endl;

bool flag = true;
while(flag == true){

string answer = "";
cout << "\nContinue attack? [Y/N]" << endl;
cin >> answer;

if(answer == "Y" || answer == "y"){
    updateHealth(playerInflictedDmg, enemyAttack, enemyHeavyAttack); // reminder to add ascii art 
    cout << "\nYour current health is now: " << playerHealthOfBattle << endl;
    cout << "Enemy current health is now: "<< enemyHealthOfBattle << endl;
    continue; 
} else if(updateHealth(playerInflictedDmg, enemyAttack, enemyHeavyAttack) == false){
    deathDialogue(player);
    flag = false;
} else{
    cout << player << ", " << "You have been given the choice to select a potion. Your skillpoints (current: " << skillPoints << ") has an impact on how much you heal by! Make sure to balance it out." << endl;
    magicalPotions(specialAttack);
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

void magicalPotions(double specialAttack){
    double healthEffectiveness = 5 * skillPoints / 0.8;
    double etherEffectiveness = 5 * specialAttack / 1.2;
    string option = "";

    cout << "Items in store: " << "\nMark of Health [Restores 25 health] \nEther Gel [Restores skill points reservoir by 5]" << endl;
    cout << "\nPlease enter a choice of 1, 2, and so on." << endl;
    cin >> option;

    if(option == "1"){
        skillPoints -= 5;
        playerHealthOfBattle += healthEffectiveness;

        cout << "MARK OF HEALTH SELECTED! Your health is now " << playerHealthOfBattle << endl;
        cout << "Your skill points have been reduced by 5." << endl;
    } 
    
    else if(option == "2"){
        skillPoints += etherEffectiveness;

        cout << "ETHER GEL SELECTED! Your skill points have been added by 5." << endl;
        cout << "Current skill points: " << skillPoints << endl;
    } 
    
    else {
        cout << "You picked nothing so this opening was closed!" << endl;
    }
}

bool updateHealth(double inflictedAttack, double enemyAttack, double enemyHeavyAttack){
    playerHealthOfBattle -= enemyAttackSequence(enemyAttack, enemyHeavyAttack);
    enemyHealthOfBattle -= inflictedAttack;

if(enemyHealthOfBattle <= 0){
    return false;
} else {
    return true;
}

if(playerHealthOfBattle <= 0){
    return false; // dead
} else {
    return true; // alive
}
}
