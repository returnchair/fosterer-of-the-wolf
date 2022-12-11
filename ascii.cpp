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
    
    cout << "Enemy health: " << 100-percentage << "% [ " << bar << " ]" << endl;

    } else {
        // nothing for now (finalized)
    }
}
                                                                          