#include <iostream>
#include <string>
#include 

using namespace std;

// att is attack
// magicAtt is magical attacks
// health ais health
// speed determines the probability of how much they heal and when they heal (HPRegeneration function)

class Thor{
    public:

    double att, magicAtt, health, speed, maxH, maxS;
    bool alive;
    string name = "Thor";
   
    

    Thor(){
    att = 250; magicAtt = 450; health = 2500; speed = 10; 
    }
    cout << "\n You have Chosen the Almighty\n        THOR         \nGod Of Thunder\n Wielder of Mjnolnir\nSon Of Odin\nFosterer of the Serpent" <<endl;
    cout << "These are Thor's stats: " << "Attack = 250 Magic Attack = 450 Health = 2500 Speed = 10" << endl;
    


    void updatehealth(double heal, double att){
        if(att >= heal){
            alive = 0;
            updatescore((att * heal));
          
        } else {
            alive = 1;
            updatescore((att / 5));
        
        }
    }




};

class Tyr{
    public:
    double attack, heavyAtt, health, speed;
    bool alive;

    Tyr(){
        attack = 250; heavyAtt = 350; health = 2000; speed = 20;
    }
    cout <<"\nYou have chosen the Relentless\n       TYR       \nGod Of War\nBinder of Fenrir\nFosterer of the Wolf" << endl;
    cout << "These are Tyr's stats: " << "Attack = 250 Magic Attack = 350 Health = 200 Speed = 20" << endl;
};


int main(){

Tyr one();
Thor one();
}