#include <iostream>

#include "choices.hpp" // dialogue
#include "classes.hpp" // player class
#include "battle.hpp" // battle sequence

int main(){

    /* string a = "a";
    cout << "enter: " << endl;
    cin >> a;
    cin.clear(); */
    if(Choice("Tyr") == "Tyr"){
        cout << "hi" << endl;
    } else if(Choice("Thor") == "Thor"){
        cout << "hi 2" << endl;
    }
}