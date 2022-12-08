#pragma once

using namespace std;

class Thor{
    public:

    bool player;
    double attack, magicAttack, health, speed, defense;
    bool alive;
    string name = "Thor";
   
    Thor(bool alive1 = true, double attack1 = 350, double magicAttack1 = 450, double health1 = 2500, double defense1 = 110, double speed1 = 10);

    // bool updatehealth(double heal, double att);
};

class Tyr{
    public:

    bool player;
    double attack, heavyAttack, health, speed, defense;
    bool alive;
    string name = "Tyr";

    Tyr(bool alive1 = true, double attack = 350, double heavyAttack1 = 350, double health1 = 2500, double defense1 = 140, double speed1 = 10);
};

// bosses

class Garm{
    public:

    double attack, heavyAttack, health, speed;
    bool alive;
    string name = "Garm";

    Garm(bool alive1 = true, double attack1 = 150, double heavyAttack1 = 400, double health1 = 4000, double speed1 = 10);
};

class Jormungandr{
    public:

    double attack, heavyAttack, health, speed;
    bool alive;
    string name = "Jormungandr";

    Jormungandr(bool alive1 = true, double attac1k = 100, double heavyAttack1 = 450, double health1 = 5000, double speed1 = 10);
};


