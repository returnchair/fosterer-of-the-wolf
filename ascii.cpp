#include <iostream>

using namespace std;

double globalPercentage = 100;

void enemyBar(double enemeyHealth, double inflictedDmg){
    double percentage = round((inflictedDmg/enemyHealth * 100));
    string bar = "**************************************************"; // 50 *

    for(double i = 0; i < percentage; i++){
        bar.erase (bar.begin()+i);
    }
    
    cout << "Enemy health: " percentange << "% [ " << bar << " ]" << endl;
}
                                                                          

                                                                          