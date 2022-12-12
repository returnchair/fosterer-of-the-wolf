#include <iostream>
#include <string>
#include <cmath>

#include "ascii.hpp"

using namespace std;

void enemyBar(double enemyHealth, double inflictedDmg){
    double percentage = round(inflictedDmg/enemyHealth * 100);
    string bar = "****************************************************************************************************"; 

    if(percentage <= 100 && percentage >= 0){
    for(double i = 0; i < percentage; i++){
        bar.replace(100-i, 1, " "); 
    }

    cout << "\nEnemy health: " << 100-percentage << "% [ " << bar << " ]" << endl;
    } else {
       cout << "\n[ THE ENEMY ATTEMPTS TO REBIRTH. REBIRTH. REBIRTH. ATTACK TO STOP REBIRTH. ]" << endl;
    }
}

void midgardAsciiIntro(){
    cout << R"(                 

,--------.,--.  ,--. ,-----. ,------.         ,--.   ,--.,--.,------.   ,----.     ,---.  ,------. ,------.   
'--.  .--'|  '--'  |'  .-.  '|  .--. '        |   `.'   ||  ||  .-.  \ '  .-./    /  O  \ |  .--. '|  .-.  \  
   |  |   |  .--.  ||  | |  ||  '--'.'        |  |'.'|  ||  ||  |  \  :|  | .---.|  .-.  ||  '--'.'|  |  \  : 
   |  |   |  |  |  |'  '-'  '|  |\  \ ,--.    |  |   |  ||  ||  '--'  /'  '--'  ||  | |  ||  |\  \ |  '--'  / 
   `--'   `--'  `--' `-----' `--' '--''-,/    `--'   `--'`--'`-------'  `------' `--' `--'`--' '--'`-------'           

    )" << endl;
}

void helAsciiIntro(){
    cout << R"(          

,--------.,--.   ,--.,------.         ,--.  ,--.,------.,--.    
'--.  .--' \  `.'  / |  .--. '        |  '--'  ||  .---'|  |    
   |  |     '.    /  |  '--'.'        |  .--.  ||  `--, |  |    
   |  |       |  |   |  |\  \ ,--.    |  |  |  ||  `---.|  '--. 
   `--'       `--'   `--' '--''-,/    `--'  `--'`------'`-----'        

    )" << endl;
}