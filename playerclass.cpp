#include <iostream>
#include <string>

using namespace std;

// att is attack
// magicAtt is magical attacks
// health ais health
// speed determines the probability of how much they heal and when they heal (HPRegeneration function)

class Thor{
    public:

    double att, magicAtt, health, speed;
    bool alive;
    string name = "Thor";

    Thor(){
    att = 250; magicAtt = 450; health = 2500; speed = 10;
    }



};

class Tyr{
    public:
    double att, heavyAtt, health, speed;
    bool alive;
    string name = "Tyr";

    Tyr(){
        att = 200; heavyAtt = 350; health = 2000; speed = 20
    }

};