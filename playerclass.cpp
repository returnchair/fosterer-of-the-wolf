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

class Thor{
    public:

    bool player;
    double att, magicAtt, health, speed, maxH, maxS;
    bool alive;
    string name = "Thor";
   
    Thor(){
    att = 250; magicAtt = 450; health = 2500; defense = 110; 
    }
 
    cout << "\n You have Chosen the Almighty\n        THOR         \nGod Of Thunder\n Wielder of Mjnolnir\nSon Of Odin\nFosterer of the Serpent" <<endl;
    cout << "These are Thor's stats: " << "Attack = 250 Magic Attack = 450 Health = 2500 Speed = 10" << endl;
    
    bool updatehealth(double heal, double att){  // will be called in main function in a while loop
        if(att >= heal){
            return false;
            cout << "Would you like to try again?" << endl;
        } else {
            return true;
        }
    }
};

class Tyr{
    public:
     double attack, heavyAtt, health, speed;
    bool alive;
    bool player;

    Tyr(){
        attack = 250; heavyAtt = 350; health = 2000; defense = 140;
    }

    cout <<"\nYou have chosen the Relentless\n       TYR       \nGod Of War\nBinder of Fenrir\nFosterer of the Wolf" << endl;
    cout << "These are Tyr's stats: " << "Attack = 250 Magic Attack = 350 Health = 200 Speed = 20" << endl;
    
    bool updatehealth(double heal, double att){  // will be called in main function in a while loop
        if(att >= heal){
            return false;
            cout << "Would you like to try again?" << endl;
        } else {
            return true;
        }
    }
};

// bosses

class Garm{
    public:
    double att, heavyAtt, health, speed;
    bool alive;
    string name = "Garm";

    Garm(){
        att =  250; heavyatt = 400; health = 4000; speed = 10;
    }
      bool updatehealth(double heal, double att){  // will be called in main function in a while loop
        if(att >= heal){
            return false;
        } else {
            return true;
        }
    }
};

class Jormungandr{
    public:
    double attack, heavyAtt, health, speed;
    string name = "Jormungandr";

    Jormungandr(){
         att =  200; heavyatt = 450; health = 5000; speed = 5;
    }
    
      bool updatehealth(double heal, double att){  // will be called in main function in a while loop
        if(att >= heal){
            return false;
        } else {
            return true;
        }
    }

};


