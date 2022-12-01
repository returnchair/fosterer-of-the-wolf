#include <iostream>

// #include "main/header.hpp" // i added this, bobby, we're doing header files

std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}


using namespace std;


void Intro();
void Choice();
void ThorEnding();
void TyreEding();
void RollCredits();

std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}

void Intro()
void Choice()

void ThorEnding()
void TyrEnding()
void End()


bool character;
bool runDown;

// temp until main.cpp gets up and working


int main() {
Intro();
Choice();

return 0;
}

// intro
// intro>
// intro

void Intro(){ // does not return
    cout << "Welcome to Fosterer of the Wolf and Serpent" << endl;
    cout << "Through out this game you will play as your desired choosen character. " << endl;
    cout << "Make your selction now, Enter (1)Tyr or (0)Thor:" << endl;
}

// character choosing
// character choosing
// character choosing

void Choice(){ // character choice
    cin >> character;
    if(character == 1){
        cout << "You have choosen Tyr, This character is more agility based." << endl;
        cout << "Would you like a run-down on this character?: (1)yes, (0)no" << endl;
        cin >> runDown;
        if(runDown == 1){
            cout << "This character goes by the name of Tyr and the God of War and Justice " << endl;
            cout << "Tyr is a more faster and agile than Thor ";
            Tyr one; // making class object

            // make sure that a function (or function within a class is called so that the program doesn't end running after runDown is finished.)

        } else if(runDown == 0){
            // does nothing; continue to game
        }
        

    } else if(character == 0){
        cout << "You have choosen Thor, This character is more damaged based." << endl;
        cout << "Would you like a run-down on this character?: (1)yes, (0)no" << endl;
        cin >> runDown;
        if(runDown == 1){
            cout << "This character is the God of Thunder known as Thor. Thor is more of a brute than Tyr. " << endl;
            cout << "Thor does more damage than Tyr but is slower. " << endl;
            Thor one; // making class object

        // make sure that a function (or function within a class is called so that the program doesn't end running after runDown is finished.)

        } else if(runDown == 0){
            // does nothing; continue to game
        }
    } 
}


// endings
// endings
// endings

void ThorEnding(){
    cout << "\nThe God of Thunder fought a hard battle against Jormungandr; however, the God of Thunder was victorious, but the poison from the serpent slowly succumbs him." << endl;
    cout << "He takes nine steps foward then falls to his" << bold_on << " death." << bold_off << endl;
    cout << "\nThrough the outcome of the death of Thor many tragic events come to past." << endl;
    cout << "Once the God of Thunder dies, Loki and the God Heimdall strikes at eachother's throats, Freyr is killed by Surtr, and the gods Mani and Solveig are slain by Skoll and Hati." << endl;
}

void TyrEnding(){
    cout << "The God of War faught a tough battle against Garmr. The God of War manages to kill the guard dog of hel. With the death of the gods" << endl;
    cout << "Loki, Hemidall, Thor, Freyr, "

}

void RollCredits(){
    cout << "\nThank you user for playing our game Fosterer of the Wolf." << endl;
    cout << "This project game was made for a semester project. Hope you enjoyed the game! Goodbye!" << endl;
}

