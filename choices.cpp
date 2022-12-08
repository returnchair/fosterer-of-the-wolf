#include <iostream>
#include "choices.hpp"

using namespace std;

std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}

// game intro
// game intro
// game intro

void Intro(){ // does not return
    cout << "\nWelcome to Fosterer of the Wolf and Serpent." << endl;
    cout << "Through out this game you will play as your desired choosen character. " << endl;
    cout << "Make your selction now! Enter Thor for Thor or Tyr for Tyr." << endl;
}

// character choosing
// character choosing / return
// character choosing

bool Choice(string Player){ 
    string PlayerInput = "";
    cout << "enter" << endl;
    cin >> PlayerInput;
    if(PlayerInput == "Tyr" || PlayerInput == "tyr"){
        cout << "You have chosen " << bold_on << "Tyr." << bold_off << endl;
        cout << "Tyr is a god. The God of War and Justice." << endl;
        return false;
    }
    
    else if(PlayerInput == "Thor" || PlayerInput == "thor"){
        cout << "You have chosen " << bold_on << "Thor." << bold_off << endl;
        cout << "Thor is a god. The God of Thunder." << endl;
        return true;
}
}

// dialogue main
// dialogue main
// dialogure main

string realmTravel(){
string choice = "";
cout << "\nYou wake up in the middle of the Yggdrasil tree. You're only open to two realms as far as you can see." << endl;
cout << "\nYou see either: \n\nMidgard [Home of the World Serpent] \nHel [Home of the Guardian Hellhound]" << endl;
cout << "\nPlease type in either Midgard or Hel to begin travel to either realms." << endl;
cin >> choice;
return choice;
}

// intros
// intros
// intros

void GarmIntro(){
    cout << "\nAs Tyr arrives to the gates of hel trying to prevent ragnorok, Tyr stops in his place hearing something sneaking up from behind him." << endl;
    cout << "**Swoosh** He turns around expecting to see something horrific but nothing is there." << endl;
    cout << "\nTyr looks up to see something hovering above him. Superised he stands still in shock as the creature hits Tyr acroos the terrain." << endl;
    cout << "Standing up Tyr realizes this wont be an easy fight as he is faced against " << bold_on << "Garm" << bold_off << " the guard dog of Hel." << endl;
    cout << "Tyr looks at Garm realizing that he is chained to the gates of hel. Thinking he is safe he tries to walk around but all of a sudden **snap** " << endl;
    cout << "The chains keeping garm near the gates snap and Garm is now free." << endl;
}

void SnakeIntro(){
        cout << "\nThor arrives to the realm of midguard preapared to fight the world serpent. Walking around looking for this snake he starts to get furious, so he yells \"Come out snake I only want to talk\"." << endl;
        cout << "With a slight smirk on his face, he looks left then slowly looks right. Aware that the snake is following behind him he continues to forward." << endl;
        cout << "The world serpent thinking he can finally get the drop on Thor, the snake jumps up and tries to land on thor." << endl;
        cout << "\"It's about damn time\" as he realeses his hammer upward hitting the serpent from the jaw and sending it flying backwards. Thor walks toward the serpent ready to fight and yells \"Bring it snake\".  " << endl;
        cout << "The serpent lets out a pericing roar, then thor get into his battle stance" << endl;
}

// endings
// endings
// endings

void deathDialogue(string character){
    cout << "\nThe book flies away. You blink. You can see your character, " << character << ". You are outside of your body. You are a soul." << endl;
    cout << "\n" << character << " falls to his knees." << endl;
}

void ThorEnding(){
    cout << "\nThe God of Thunder fought a hard battle against Jormungandr; however, the God of Thunder was victorious, but the poison from the serpent slowly succumbs him." << endl;
    cout << "He takes nine steps foward then falls to his" << bold_on << " death." << bold_off << endl;
    cout << "\nThrough the outcome of the death of Thor many tragic events come to past." << endl;
    cout << "Once the God of Thunder dies, Loki and the God Heimdall strikes at eachother's throats, Freyr is killed by Surtr, and the gods Mani and Solveig are slain by Skoll and Hati." << endl;
}

void TyrEnding(){
    cout << "\nThe God of War faught a tough battle against Garmr. The God of War manages to kill the guard dog of hel. With the death of the gods" << endl;
    cout << "Loki, Hemidall, Thor, Freyr as Ragnorok arrives " << endl;

}

void RollCredits(){
    cout << "\nThank you user for playing our game Fosterer of the Wolf." << endl;
    cout << "This project game was made for a semester project. Hope you enjoyed the game! Goodbye!" << endl;
}

    
    
    