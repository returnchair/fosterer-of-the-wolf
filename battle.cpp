#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <iostream>
#include <random>
#include <thread>

#include "battle.hpp"
#include "choices.hpp" // dialogue sequences
#include "ascii.hpp" // ascii sequences

using namespace std;
using namespace std::this_thread;   // sleep_for, sleep_until
using namespace std::chrono;        // nanoseconds, system_clock, seconds
                                    // sleep_until(system_clock::now() + seconds(1));
random_device rd;
random_device sp;
uniform_int_distribution<int> skill(1,20);
uniform_int_distribution<int> dist(1,10);

/*
    Logic behind battle.cpp:
    *   Battle begins off a initiateBattle function being called from main.cpp
    *   Skill points represent how much a player can use a potion incremented by 5
    *   Player will strike first onto enemy / an update health function is present within battle.cpp that checks if either enemy or player's health is below 0 and then replaces the ddialogue for "Continue attack [Y/N]" 
    
    *   If player inputs N for "Continue attack [Y/N]" magicalPotions function will be called
    *   If player inputs Y for "Continue attack [Y/N]" updatehealth function will be called 
    *   If player is dead (checked through while loop) -> death dialogue is called and while loop reaks
*/

int skillPoints = 10;
double playerHealthOfBattle = 1;
double enemyHealthOfBattle = 1;
bool aliveCheck = true;

string aliveDia = "You rest on your feet after attacking. Do you wish to continue attacking or look through your bag of potions? [Y/N]";
const char* deathDia = "You can hear pages suddenly flipping around you. You read briefly, \"Norse Mythology\". The book asks you to input your name:";

void initiateBattle(string player, bool alive, double attack, double specialAttack, double health, double defense, double speed, double enemyHealth, double enemyAttack, double enemyHeavyAttack, string enemyName){

playerHealthOfBattle = health * defense; // compensate defense stat
enemyHealthOfBattle = enemyHealth;

sleep_until(system_clock::now() + seconds(3));
cout << "\nYou strike first!" << endl;

updateHealth(attackSequence(attack, specialAttack), enemyAttack, enemyHeavyAttack);

sleep_until(system_clock::now() + seconds(2));
cout << "\nEnemy current health is now: " << enemyHealthOfBattle << endl;

// while loop for entire enemy fight

bool flag = true;
while(flag == true){

string answer = "";
sleep_until(system_clock::now() + seconds(2));
cout << "\n" << aliveDia << endl;
cin >> answer;

if(aliveCheck == false){
    deathDialogue(player);
    break;
} else if(answer == "Y" || answer == "y"){
    aliveCheck = updateHealth(attackSequence(attack, specialAttack), enemyAttack, enemyHeavyAttack); 
    cout << "\nYour current health is now: " << playerHealthOfBattle << endl;
    cout << enemyName << " current health is now: " << enemyHealthOfBattle << endl;
    continue; 
} else {
    cout << "\n" << player << ", " << "You have been given the choice to select a potion. You currently have " << skillPoints << " skill points!" << endl;
    magicalPotions(specialAttack);
    continue; 
}
}
}

// player attack enemy 

double attackSequence(double attack, double specialAttack){
    double inflictedDmg = attack;
    int crit = dist(rd);

    if (crit == 10){
         double inflictedDmg = attack + 150;
         cout << "[!] You inflicted " << inflictedDmg << " damage! You also hit a critical and applied 150 bonus damage." << endl;
         skillPoints += 5;
         return inflictedDmg;
     } else {
        cout << "[!] You inflicted " << inflictedDmg << " damage!" << endl;
        skillPoints += 2;
        return inflictedDmg;
      }
}

// enemy attack player

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

// magicalPotions is a function that gives the user various options of potions
// magicalPotions runs a check if the player has sufficient enough skillPoints to use a potion

// poisonTask thread call

void poisonTask(double specialAttack){
    bool poisonFlag = true;

    while(poisonFlag == true){
    sleep_until(system_clock::now() + seconds(5));
    enemyHealthOfBattle -= 75 * specialAttack;
}
}

void magicalPotions(double specialAttack){
    double healthEffectiveness = 50 * specialAttack;
    double etherEffectiveness = 2 * specialAttack;
    string option = "";

    cout << "Items in store: " << "\n\n1. Mark of Health [Brewed in the lands of the giants; sacred and tasty. Restores 50 health upon use and takes away five skill points.] \n\n2. Ether Gel [Gel discovered through the lands of Asgard. Restores skill points reservoir by five skill points.] \n\n3. Poisonous Aura [Stackable magicical properties in which allows the consumer to permanently inflict damage on enemies. Uses up thirty skill points.]" << endl;
    cout << "\nPlease enter a choice of 1, 2, and so on." << endl;
    cin >> option;

    if(option == "1" && skillPoints >= 5){
        skillPoints -= 5;
        playerHealthOfBattle += healthEffectiveness;

        cout << "\nMARK OF HEALTH SELECTED! Your health is now " << playerHealthOfBattle << endl;
        cout << "Your skill points have been reduced by 5 and is now: " << skillPoints << endl;
    } 
    
    else if(option == "2" && skillPoints >= 5){
        skillPoints += etherEffectiveness;

        cout << "\nETHER GEL SELECTED! Your skill points have been added by 5." << endl;
        cout << "Current skill points: " << skillPoints << endl;

    } else if(option == "3" && skillPoints >= 30) {
        skillPoints -= 30;

        cout << "\nPOISONOUS AURA SELECTED! This aura will inflict 75 damage around you every five seconds." << endl;
        cout << "Your skill points have been reduced by 30 and is now: " << skillPoints << endl;

        thread task(poisonTask, specialAttack);
        task.detach(); // runs in bg

    } else {
        cout << "You picked nothing so this opening was closed or you did not have enough skill points!" << endl;
    }
}

// updateHealth is a function that receives parameters to determine the player's and enemys health after an attack from both characters
// updateHealth returns a false & replaces intitial while loop dialogue if player or enemy is dead

bool updateHealth(double inflictedAttack, double enemyAttack, double enemyHeavyAttack){
    playerHealthOfBattle -= enemyAttackSequence(enemyAttack, enemyHeavyAttack);
    enemyHealthOfBattle -= inflictedAttack;

    enemyBar(enemyHealthOfBattle, inflictedAttack);

if(enemyHealthOfBattle <= 0){
    aliveDia = aliveDia.replace(0, 150, deathDia);
    return false;
} else if(playerHealthOfBattle <= 0) {
    aliveDia = aliveDia.replace(0, 150, deathDia); 
    return false;
} else {
    return true;
}
}
