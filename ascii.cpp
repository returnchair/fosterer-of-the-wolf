#include <iostream>
#include <string>
#include <cmath>

#include "ascii.hpp"

using namespace std;

void enemyBar(double enemyHealth, double inflictedDmg){
    double percentage = round(inflictedDmg/enemyHealth * 100);
    string bar = "****************************************************************************************************"; 

    if(percentage >= 100){

    for(double i = 0; i < percentage; i++){
        bar.replace(i, 1, " "); // well aware that i can do 100-i to make it look nicer, but it came with some issues that i was too lazy to fix
    }
    
    cout << "Enemy health: " << 100-percentage << "% [ " << bar << " ]" << endl;

    } else {
        // nothing for now (finalized)
    }
}
                                                                          

                                                                          