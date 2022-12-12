#include <iostream>
#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <random>

#include "choices.hpp"

using namespace std;
using namespace std::this_thread;   // sleep_for, sleep_until
using namespace std::chrono;        // nanoseconds, system_clock, seconds
                                    // sleep_until(system_clock::now() + seconds(1));

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
}

// intros
// intros
// intros

void GarmIntro(){
    sleep_until(system_clock::now() + seconds(5));
    cout << "\nAs Tyr arrives to the gates of hel trying to prevent Ragnarok, Tyr stops in his place hearing something sneaking up from behind him." << endl;
    sleep_until(system_clock::now() + seconds(3));
    cout << "\n**Swoosh** He turns around expecting to see something horrific but nothing is there." << endl;
    sleep_until(system_clock::now() + seconds(3));
    cout << "\nTyr looks up to see something hovering above him. Surprised, he stands still in shock as the creature hits Tyr across the terrain." << endl;
    sleep_until(system_clock::now() + seconds(3));
    cout << "\nStanding up Tyr realizes this won't be an easy fight as he is faced against " << bold_on << "Garm" << bold_off << " the guard dog of Hel." << endl;
    sleep_until(system_clock::now() + seconds(3));
    cout << "\nTyr looks at Garm realizing that he is chained to the gates of Hel. Thinking he is safe he tries to walk around but all of a sudden **snap** " << endl;
    sleep_until(system_clock::now() + seconds(3));
    cout << "\nThe chains keeping garm near the gates snap and Garm is now free." << endl;
}

void SnakeIntro(){
        sleep_until(system_clock::now() + seconds(5));
        cout << "\nThor arrives to the realm of Midgard preapared to fight The World Serpent. Walking around looking for this snake he starts to get furious, so he yells \"Come out snake I only want to talk\"." << endl;
        sleep_until(system_clock::now() + seconds(3));
        cout << "\nWith a slight smirk on his face, he looks left then slowly looks right. Aware that the snake is following behind him he continues to forward." << endl;
        sleep_until(system_clock::now() + seconds(3));
        cout << "\nThe world serpent thinking he can finally get the drop on Thor, the snake jumps up and tries to land on Thor." << endl;
        sleep_until(system_clock::now() + seconds(3));
        cout << "\n\"It's about damn time\" as he realeses his hammer upward hitting the serpent from the jaw and sending it flying backwards. Thor walks toward the serpent ready to fight and yells \"Bring it snake\".  " << endl;
        sleep_until(system_clock::now() + seconds(3));
        cout << "\nThe serpent lets out a piercing roar, then Thor get into his battle stance" << endl;
}

// endings
// endings
// endings

void deathDialogue(string character){
    cout << "\nThe book flies away. You blink. You can see your character, " << character << ". You are outside of your body. You are a soul." << endl;
    sleep_until(system_clock::now() + seconds(1));
    cout << "\n" << character << " feels a sharp pain." << endl;
}

void ThorEnding(){
    sleep_until(system_clock::now() + seconds(3));
    cout << "\nThe God of Thunder fought a hard battle against Jormungandr; however, the God of Thunder was victorious, but the poison from the serpent slowly succumbs him." << endl;
    sleep_until(system_clock::now() + seconds(3));
    cout << "He gets back up thentakes nine steps foward then falls to his" << bold_on << " death." << bold_off << endl;
    sleep_until(system_clock::now() + seconds(3));
    cout << "\nThrough the outcome of the death of Thor many tragic events come to past." << endl;
    sleep_until(system_clock::now() + seconds(3));
    cout << "Once the God of Thunder dies, Loki and the God Heimdall strikes at eachother's throats, Freyr is killed by Surtr, and the gods Mani and Solveig are slain by Skoll and Hati." << endl;
}

void TyrEnding(){
    sleep_until(system_clock::now() + seconds(3));
    cout << "\nThe God of War faught a tough battle against Garmr. The God of War manages to kill the guard dog of hel. With the death of the gods" << endl;
    sleep_until(system_clock::now() + seconds(3));
    cout << "Loki, Hemidall, Thor, Freyr as Ragnarok arrives." << endl;

}

void RollCredits(){
    sleep_until(system_clock::now() + seconds(3));
    cout << "\nThank you user for playing our game Fosterer of the Wolf." << endl;
    cout << "This project game was made for a semester project. Hope you enjoyed the game! Goodbye!" << endl;
}

    
    
    