#pragma once

using namespace std;

void initiateBattle(string player, bool alive, double attack, double specialAttack, double health, double defense, double speed);

double attackSequence(double attack, double specialAttack);

double enemyAttackSequence(double attack, double heavyAttack);

bool magicalPotions(double health, double specialAttack); 

bool updateHealth(double inflictedAttack, double bossAttack, double bossHeavyAttack);
