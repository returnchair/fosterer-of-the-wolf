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