#include <iostream>
#include <string>
#include "classes.hpp"

using namespace std;

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