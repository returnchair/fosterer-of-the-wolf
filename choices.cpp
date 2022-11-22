#include <iostream>

#include "main/header.hpp" // i added this, bobby, we're doing header files

using namespace std;

void Intro(){}
void Choice(){}

bool charcter;

int main() {
Intro();
Choice();




return 0;
}

void Intro(){
    cout << "Welcome to Fosterer of the Wolf and Serpent" << endl;
    cout << "Through out this game you will play as your desired choosen character. "
    cout << "Make your selction now, Enter (1)Tyr or (0)Thor:"
}

void Choice(){
    cin >> character;
    if(character == 1){
        cout << "You have choosen Tyr, This character is more agility based."

    } else if(character == 0){
        cout << "You have choosen Thor, This character is more damaged based."
        cout << ""
    } 
}
