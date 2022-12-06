#include <iostream>

#include "choices.hpp" // dialogue
#include "classes.hpp" // player class
#include "battle.hpp" // battle sequence

int main(){

    /* string a = "a";
    cout << "enter: " << endl;
    cin >> a;
    cin.clear(); */

    bool choice = "";

    if(Choice("Tyr") == false){
        cout << "hi" << endl;
        choice = false;
    } else if(Choice("Thor") == true){
        cout << "hi 2" << endl;
        choice = false;
    }

  Thor one;
  cout << one.health << endl;

}