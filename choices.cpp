#include <iostream>

#include "main/header.hpp" // i added this, bobby, we're doing header files

using namespace std;

void Intro(){}
void Choice(){}
void Thorending(){}
void Tyrending(){}
void End(){}

bool charcter;
bool runDown;

// temp until main.cpp gets up and working

int main() {
Intro();
Choice();

return 0;
}

void Intro(){ // does not return
    cout << "Welcome to Fosterer of the Wolf and Serpent" << endl;
    cout << "Through out this game you will play as your desired choosen character. " << endl;
    cout << "Make your selction now, Enter (1)Tyr or (0)Thor:" << endl;
}

void Choice(){ // character choice
    cin >> character;
    if(character == 1){
        cout << "You have choosen Tyr, This character is more agility based." << endl;
        cout << "Would you like a run-down on this character?: (1)yes, (0)no" << endl;
        cin >> runDown;
        if(runDown == 1){
            cout << "This character goes by the name of Tyr and the God of War and Justice " << endl;
            cout << " "
            Tyr one; // making class object
        } else if(runDown == 0){
            break;
        }
        

    } else if(character == 0){
        cout << "You have choosen Thor, This character is more damaged based." << endl;
        cout << "Would you like a run-down on this character?: (1)yes, (0)no" << endl;
        cin >> runDown;
        if(runDown == 1){
            cout << "This character is the God of Thunder known as Thor. Thor is more of a brute than Tyr. " << endl;
            cout << "Thor does more damage than Tyr but is slower. " << endl;
            Thor one; // making class object
        } else if(runDown == 0){
            break;
        }
    } 
}

void Thorending(){
    cout << "The God of Thunder faught a hard battle against Jormungandr. Though the God victorious, the poison from the serpent slowly succumbs him. " << endl;
    cout << "The God takes nine steps foward then falls dead. Through the outcome of the death of Thor many tragic events come to past." << endl;
    cout << "Once the God of Thunder dies, Loki an the God Heimdall kill eachother, Freyr is killed by Surtr, and the gods Mani and Solveig are slain by Skoll and Hati." << endl;
}

void Tyrending(){
    cout << "The God of War faught a tough battle against Garmr. The God of War manages to kill the guard dog of hel. With the death of the gods" << endl;
    cout << "Loki, Hemidall, Thor, Freyr, "
}

void End(){
    cout << "Thank you user for playing our game Fosterer of the Wolf." << endl;
    cout << "This project game was made for a semester project. Hope you enjoyed the game" << endl;
    cout << "Goodbye" << endl;
    break;
}

