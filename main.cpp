#include <iostream>

#include "choices.hpp"

int main(){

    string a = "a";
    cout << "enter: " << endl;
    cin >> a;
    if(Choice(a) == "Tyr"){
        cout << "hi" << endl;
    } else if(Choice(a) == "Thor"){
        cout << "hi 2" << endl;
    }
}