#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <iostream>
#include <random>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

void battle();

std::ostream& bold_on(std::ostream& os)
{
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os)
{
    return os << "\e[0m";
}

string player = "Tyr";
string party = "Thor";
string enemy = "Enemy";
// Health, attack, defense, skill points, max health, max SP, and alive
double pStats[6] = {100, 25, 10, 50, 100, 50};
bool pAlive = 1;
// double aStats[5] = {80, 30, 8, 42, 1};
double eStats[4] = {82, 12, 12, 1};
string items[4] = {"Potion", "Ether", "", ""};

//player, enemy, pStats, eStats

int main(){
    battle();
    return 0;
}

void battle () {
    string input = "";
    random_device rd;
    random_device sp;
    uniform_int_distribution<int> skill(1,20);
    uniform_int_distribution<int> dist(1,10);
    bool pDef = 0;
    bool ePoison = 0;
    int eStatus = 0;
    while(pStats[4] != 0 || eStats[3] != 0){
    if (ePoison == 1 && eStatus <= 3){
        cout << "\nPoison inflicts damage!" << endl;
        cout << enemy << " takes 10 damage!" << endl;
        eStats[0] = eStats[0] - 10;
        eStatus += 1;
    } else if (eStatus > 3){
        cout << "\nEnemy recovers from poison!" << endl;
        eStatus = 0;
        ePoison = 0;
    }
    cout << "\nWhat will Tyr do?" << endl;
    cout << "Attack     Skill     Item     Defend" << endl;
    cin >> input; 
    if (pDef == 1) {
        pStats[2] = pStats[2] / 1.5;
    }

    if (input == "Attack" || input == "attack"){
        int crit = dist(rd);
        if (crit == 10){
            pStats[1] = pStats[1]*1.5;
            eStats[0] -= pStats[1] - eStats[2];
            cout << "\nAttack done by " << player << "!" << endl;
            sleep_until(system_clock::now() + seconds(1));
            cout << "Inflicted " << pStats[1] << " damage! " << bold_on << "It's a critical hit!!! " << bold_off << enemy << " is at " << eStats[0] << " health!" << endl;
            pStats[1] = pStats[1]/1.5;
        } else {
            eStats[0] -= pStats[1] - eStats[2];
            cout << "\nAttack done by " << player << "!" << endl;
            sleep_until(system_clock::now() + seconds(1));
            cout << "Inflicted " << pStats[1] << " damage! " << enemy << " is at " << eStats[0] << " health!" << endl;
        }
    } else if (input == "Item" || input == "item"){
        cout << "Items: " << items << endl;
        cout << "Type one out to use, be back out, type anything not in the item list" << endl;
        string select = "";
        cin >> select;
        if(select == "potion" || select == "Potion"){
            cout << "Potion: Restores 50 health." << endl;
            cout << "Use Potion?" << endl;
            string use = "";
            cin >> use;
            if(use == "Yes" || use == "yes"){
                if((pStats[0] + 50) <= pStats[4]){
                    pStats[0] += 50;
                } else {
                    pStats[0] = pStats[4];
                }
            } else {
                continue;
            }
        } else if (select == "ether" || select == "Ether"){
            cout << "Ether: Restores 20 skill points." << endl;
            cout << "Use Ether?" << endl;
            string use = "";
            cin >> use;
            if(use == "Yes" || use == "yes"){
                if((pStats[3] + 20) <= pStats[5]){
                    pStats[3] += 20;
                } else {
                    pStats[3] = pStats[5];
                }
            } else {
                continue;
            }
        }
    } else if (input == "Skill" || input == "skill"){
        cout << "Tyr has " << bold_on << pStats[3] << " skill points left!" << bold_off << endl;
        cout << "Heavy swing " << bold_on << "12 Sp " << bold_off << "\nPoison " << bold_on << "15 Sp" << bold_off << endl;
        string move = "";
        cin >> move;
        if(move == "heavy swing" || move == "heavy" || move == "swing" || move == "Heavy swing" || move == "heavy Swing" || move == "Heavy Swing" || move == "Heavy" || move == "Swing"){
            if(pStats[3] >= 12){
                int crit = skill(sp);
                cout << crit << endl;
                if(crit == 20){
                    pStats[1] = pStats[1]*2;
                    eStats[0] -= pStats[1] - eStats[2];
                    cout << "\nAttack done by " << player << "!" << endl;
                    sleep_until(system_clock::now() + seconds(1));
                    cout << "Inflicted " << pStats[1] << " damage! " << bold_on << "It's a critical hit!!! " << bold_off << enemy << " is at " << eStats[0] << " health!" << endl;
                    pStats[1] = pStats[1]/2;
                } else {
                pStats[1] = pStats[1]*1.5;
                eStats[0] -= pStats[1] - eStats[2];
                cout << "\nAttack done by " << player << "!" << endl;
                sleep_until(system_clock::now() + seconds(1));
                cout << "Inflicted " << pStats[1] << " damage! " << enemy << " is at " << eStats[0] << " health!" << endl;
                pStats[1] = pStats[1]/1.5;
                }
            } else {
                cout << "\nTyr doesn't have enough skill points!" << endl;
                continue;
            }
        } else if (move == "Poison" || move == "poison"){
            if(pStats[3] >= 10){
                cout << "\nTyr inflicts poison on enemy!" << endl;
                ePoison = 1;
                eStatus = 0;
            } else {
                cout << "Tyr doesn't have enough skill points!" << endl;
                continue;
            }
        } else {
            continue;
        }
    } else if (input == "defend" || input == "Defend"){
        pStats[2] = pStats[2] * 1.5;
        pDef = 1;
    }
    
    if(eStats[0] <= 0){
        eStats[3] = 0;
        cout << "Tyr defeats the enemy!" << endl;
        break;
    }

    cout << "\nEnemy attacks!" << endl;
    int crit = dist(rd);
        if (crit == 10){
            eStats[1] = eStats[1]*1.5;
            pStats[0] -= eStats[1] - pStats[2];
            cout << "\nAttack done by " << enemy << "!" << endl;
            sleep_until(system_clock::now() + seconds(1));
            cout << "Inflicted " << eStats[1] << " damage! " << bold_on << "It's a critical hit!!! " << bold_off << player << " is at " << pStats[0] << " health!" << endl;
            eStats[1] = eStats[1]/1.5;
        } else {
            if(pStats[2] >= eStats[1]){
                cout << "\nAttack done by " << enemy << "!" << endl;
                sleep_until(system_clock::now() + seconds(1));
                cout << player << " blocks the attack! " << player << " has " << pStats[0] << " health remaining!" << endl;
            } else {
            pStats[0] -= eStats[1] - pStats[2];
            cout << "\nAttack done by " << enemy << "!" << endl;
            sleep_until(system_clock::now() + seconds(1));
            cout << "Inflicted " << eStats[1] - pStats[2] << " damage! " << player << " is at " << pStats[0] << " health!" << endl;
            }
        }
    
    if (pStats[0] <= 0){
        pAlive = 0;
        cout << "Tyr collapses \nBattle lost!" << endl;
        break;
    }
    }


}