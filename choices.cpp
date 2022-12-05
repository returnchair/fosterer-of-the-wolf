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

// intro
// intro
// intro

void Intro(){ // does not return
    cout << "Welcome to Fosterer of the Wolf and Serpent" << endl;
    cout << "Through out this game you will play as your desired choosen character. " << endl;
    cout << "Make your selction now, Enter (1)Tyr or (0)Thor:" << endl;
}

// character choosing
// character choosing / return
// character choosing

string Choice(string Player){ 
    string PlayerInput = "";
    cout << "enter" << endl;
    cin >> PlayerInput;
    if(PlayerInput == "Tyr" || PlayerInput == "tyr"){
        cout << "You have chosen " << bold_on << "Tyr." << bold_off << endl;
        cout << "Tyr is a god. The God of War and Justice." << endl;
        string s = Player;
        return s;
    }
    
    else if(PlayerInput == "Thor" || PlayerInput == "thor")
        cout << "You have chosen " << bold_on << "Thor." << bold_off << endl;
        cout << "Thor is a god. The God of Thunder." << endl;
        string s = Player;
        return s;
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
    cout << "Loki, Hemidall, Thor, Freyr as Ragnorok arrives " << endl;

}

void RollCredits(){
    cout << "\nThank you user for playing our game Fosterer of the Wolf." << endl;
    cout << "This project game was made for a semester project. Hope you enjoyed the game! Goodbye!" << endl;
}

void GarmIntro(){
    cout << "\nAs Tyr arrives to the gates of hel trying to prevent ragnorok, Tyr stops in his place hearing something sneaking up from behind him." << endl;
    cout << "**Swoosh** He turns around expecting to see something horrific but nothing is there." << endl;
    cout << "\nTyr looks up to see something hovering above him. Superised he stands still in shock as the creature hits Tyr acroos the terrain." << endl;
    cout << "Standing up Tyr realizes this wont be an easy fight as he is faced against " << bold_on << "Garm" << bold_off << " the guard dog of Hel." << endl;
    cout << "Tyr looks at Garm realizing that he is chained to the gates of hel. Thinking he is safe he tries to walk around but all of a sudden **snap** " << endl;
    cout << "The chains keeping garm near the gates snap and Garm is now free." << endl;
}

void SnakeIntro(){
    cout << "Thor arrives to the realm of midguard preapared to fight the world serpent. Walking around looking for this snake he starts to get furious, so he yells \"Come out snake i only want to " << endl;
    }
    
    