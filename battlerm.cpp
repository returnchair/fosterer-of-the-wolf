#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <iostream>
#include <random>

#include "battle.hpp"

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

    random_device rd;
    random_device sp;
    uniform_int_distribution<int> skill(1,20);
    uniform_int_distribution<int> dist(1,10);

    int skillPoints = 50;

    bool pDef = 0;
    bool ePoison = 0;
    int eStatus = 0;

void initiateBattle(string player, bool alive, double attack, double specialAttack, double health, double defense, double speed){

cout << "debug 123" << endl;

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

double magicalPotions(double health, double specialAttack){
    double healthEffectiveness = 25 * specialAttack / 0.8;
    double etherEffectiveness = 5 * specialAttack / 1.2;
    string option = "";

    cout << "Items in store: " << "Mark of Health [Restores 25 health], Ether Gel [Restores skill points reservoir by 5]" << endl;
    cout << "\nPlease enter a choice of 1, 2, and so on." << endl;
    cin >> option;

    if(option == "1"){
        skillPoints -= 5;
        return health + healthEffectiveness;
    } 
    
    else if(option == "2"){
        skillPoints += etherEffectiveness;
    } 
    
    else {
        cout << "You picked nothing so this opening was closed!" << endl;
    }
}

