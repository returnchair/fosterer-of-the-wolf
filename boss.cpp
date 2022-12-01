#include <iostream>
#include <string>

using namespace std;

class Garm{
    public:
    double att, heavyAtt, health, speed;
    bool alive;
    string name = "Garm";

    Garm(){
        att =  250; heavyatt = 400; health = 4000; speed = 10;
    }
};

class Jormungandr{
    public:
    double attack, heavyAtt, health, speed;
    string name = "Jormuungandr";

    Jormungandr(){
         att =  200; heavyatt = 450; health = 5000; speed = 5;
    }
    

};