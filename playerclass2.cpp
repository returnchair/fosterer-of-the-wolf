#include <iostream>
#include <string>
#include "classes.hpp"
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <random>

using namespace std;

// att is attack
// magicAtt is magical attacks
// health ais health
// speed determines the probability of how much they heal and when they heal (HPRegeneration function)

Thor::Thor(bool alive1 = true, double attack1 = 250, double magicAttack1 = 450, double health1 = 2500, double defense1 = 110, double speed1 = 10){
    alive = alive1;
    attack = attack1;
    magicAttack = magicAttack1;
    health = health1;
    defense = defense1;
    speed = speed1;
}

Tyr::Tyr(bool alive1 = true, double attack = 250, double heavyAttack1 = 350, double health1 = 2500, double defense1 = 140, double speed1 = 10){
    alive = alive1;
    attack = attack1;
    magicAttack = magicAttack1;
    health = health1;
    defense = defense1;
    speed = speed1;
}

Garm::Garm(bool alive1 = true, double attack1 = 250, double heavyAttack1 = 400, double health1 = 4000, double speed1 = 10){
    alive = alive1;
    attack = attack1;
    heavyAttack = heavyAttack1;
    health = health1;
    speed = speed1;
}

Jormungandr::Jormungandr(bool alive1 = true, double attac1k = 200, double heavyAttack1 = 450, double health1 = 5000, double speed1 = 10){
    alive = alive1;
    attack = attack1;
    heavyAttack = heavyAttack1;
    health = health1;
    speed = speed1;
}