#include <iostream>
#include <cmath>

using namespace std;

double globalPercentage = 100;

void enemyBar(double enemyHealth, double inflictedDmg){
    double percentage = round((inflictedDmg/enemyHealth * 100));
    string bar = "**************************************************"; // 50 *

    for(double i = 0; i < percentage; i++){
        bar.replace(100-i, 1, " ");
    }
    
    cout << "Enemy health: " << 100-percentage << "% [ " << bar << " ]" << endl;
}
                                                                          

                                                                          