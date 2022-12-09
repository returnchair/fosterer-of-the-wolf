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

int skillPoints = 10;

double playerHealthOfBattle = 1;
double enemyHealthOfBattle = 1;
bool aliveCheck = true;

string aliveDia = "Continue attack? [Y/N]";
const char* deathDia = "You can hear pages suddenly flipping around you. You read briefly, \"Norse Mythology\". The book asks you to input your name:";

void initiateBattle(string player, bool alive, double attack, double specialAttack, double health, double defense, double speed, double enemyHealth, double enemyAttack, double enemyHeavyAttack, string enemyName){

playerHealthOfBattle = health;
enemyHealthOfBattle = enemyHealth;

sleep_until(system_clock::now() + seconds(3));
cout << "\nYou strike first!" << endl;

// may need to add variable replacement for attackSequence passing as a parameter

double playerInflictedDmg = attackSequence(attack, specialAttack);
updateHealth(playerInflictedDmg, enemyAttack, enemyHeavyAttack);

cout << "\nEnemy current health is now: " << enemyHealthOfBattle << endl;

bool flag = true;

while(flag == true){

string answer = "";
cout << "\n" << aliveDia << endl;
cin >> answer;

if(aliveCheck == false){
    deathDialogue(player);
    break;
} else if(answer == "Y" || answer == "y"){
    aliveCheck = updateHealth(playerInflictedDmg, enemyAttack, enemyHeavyAttack); // reminder to add ascii art 
    cout << "\nYour current health is now: " << playerHealthOfBattle << endl;
    cout << enemyName << " current health is now: " << enemyHealthOfBattle << endl;
    continue; 
} else {
    cout << "\n" << player << ", " << "You have been given the choice to select a potion. Your skillpoints (current: " << skillPoints << ") has an impact on how much you heal by! Make sure to balance it out." << endl;
    magicalPotions(specialAttack);
    continue; 
}
}
}

double attackSequence(double attack, double specialAttack){
    double inflictedDmg = attack;
    int crit = dist(rd);

    if (crit == 10){
         double inflictedDmg = attack + 150;
         return inflictedDmg;
     } else {
         return inflictedDmg;
      }
}

double enemyAttackSequence(double attack, double heavyAttack){
    double inflictedDmg = attack;
    int crit = dist(rd);

    if (crit == 10){
         double inflictedDmg = attack * (heavyAttack/150);
         return inflictedDmg;

     } else {
         return inflictedDmg;
      }
}

// void function preferred - player's health/ether is a global variable so we can just change it within magicalPotions()

void magicalPotions(double specialAttack){
    double healthEffectiveness = 25 * specialAttack;
    double etherEffectiveness = 2 * specialAttack;
    string option = "";

    cout << "Items in store: " << "\nMark of Health [Restores 25 health] \nEther Gel [Restores skill points reservoir by 5]" << endl;
    cout << "\nPlease enter a choice of 1, 2, and so on." << endl;
    cin >> option;

    if(option == "1" && skillPoints >= 5){
        skillPoints -= 5;
        playerHealthOfBattle += healthEffectiveness;

        cout << "MARK OF HEALTH SELECTED! Your health is now " << playerHealthOfBattle << endl;
        cout << "Your skill points have been reduced by 5 and is now: " << skillPoints << endl;
    } 
    
    else if(option == "2" && skillPoints >= 5){
        skillPoints += etherEffectiveness;

        cout << "ETHER GEL SELECTED! Your skill points have been added by 5." << endl;
        cout << "Current skill points: " << skillPoints << endl;

    } else if(skillPoints <= 4){
        cout << "You do not have enough skill points to use a potion." << endl;

    } else {
        cout << "You picked nothing so this opening was closed!" << endl;
    }
}

bool updateHealth(double inflictedAttack, double enemyAttack, double enemyHeavyAttack){
    playerHealthOfBattle -= enemyAttackSequence(enemyAttack, enemyHeavyAttack);
    enemyHealthOfBattle -= inflictedAttack;

if(enemyHealthOfBattle <= 0){
    aliveDia = aliveDia.replace(0, 22, deathDia);
    return false;
} else if(playerHealthOfBattle <= 0) {
    aliveDia = aliveDia.replace(0, 22, deathDia); 
    return false;
} else {
    return true;
}
}