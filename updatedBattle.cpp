// BUG DISCOVERED
// @ Line 34, string needs to be properly initialized | @ Line 64-91 string array needs to be checked via a array-for-loop to check if input is valid | @ Line 49-56 Program crashes once critical occurs
// BUG DISCOVERED, -bobby (ps, i'll work on incoporating ascii art and sound after all bugs are fixed)

#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <iostream>

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
// Health, attack, defense, skill points?, and alive
double pStats[5] = {100, 25, 38, 50, 1};
double aStats[5] = {80, 30, 20, 42, 1};
double eStats[4] = {82, 12, 27, 1};
string items[] = {"Potion", "Ether"};

//player, enemy, pStats, eStats

int main(){
    battle();
    return 0;
}

void battle () {
    string input = "";
    while(pStats[4] != 0 || eStats[3] != 0){
    cout << "What will Tyr do?" << endl;
    cout << "Attack     Skill     Item     Defend" << endl;
    cin >> input; 
    if (input == "Attack" || input == "attack"){
        int crit = rand() % 10;
        if (crit == 10){
            pStats[1] = pStats[1]*1.5;
            eStats[0] -= pStats[1];
            cout << "\nAttack done by " << player << "!" << endl;
            sleep_until(system_clock::now() + seconds(1));
            cout << "Inflicted " << pStats[1] << " damage! " << bold_on << "It's a critical hit!!! " << bold_off << enemy << " is at " << eStats[0] << " health!" << endl;
            pStats[1] = pStats[1]/1.5;
        } else {
            eStats[0] -= pStats[1];
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
            cout << "Potion: Heals 50 health to party member." << endl;
            cout << "Who will you use it on? Tyr or Thor?" << endl;
            string use = "";
            cin >> use;
            if(use == "Tyr" || use == "tyr"){
                pStats[0] += 50;
            } else if (use == "Thor" || use == "thor"){
                aStats[0] += 50; 
            } else {
                continue;
            }
        } else if (select == "ether" || select == "Ether"){
            cout << "Ether: Restores 20 skill points to party member." << endl;
            cout << "Who will you use it on? Tyr or Thor?" << endl;
            string use = "";
            cin >> use;
            if(use == "Tyr" || use == "tyr"){
                pStats[3] += 20;
            } else if (use == "Thor" || use == "thor"){
                aStats[3] += 20; 
            } else {
                continue;
            }
        }
    } else if (input == "Skill" || input == "skill"){
        cout << "Heavy swing " << bold_on << "12 Sp " << bold_off << "\nPoison " << bold_on << "15 Sp" << bold_off << endl;
        string move = "";
        cin >> move;
        if(move == "heavy swing" || move == "heavy" || move == "swing" || move == "Heavy swing" || move == "heavy Swing" || move == "Heavy Swing" || move == "Heavy" || move == "Swing"){
            if(pStats[3] >= 12){
                int crit = rand() % 20;
                if(crit == 20){
                    pStats[1] = pStats[1]*2;
                    eStats[0] -= pStats[1];
                    cout << "\nAttack done by " << player << "!" << endl;
                    sleep_until(system_clock::now() + seconds(1));
                    cout << "Inflicted " << pStats[1] << " damage! " << bold_on << "It's a critical hit!!! " << bold_off << enemy << " is at " << eStats[0] << " health!" << endl;
                    pStats[1] = pStats[1]/2;
                } else {
                pStats[1] = pStats[1]*1.5;
                eStats[0] -= pStats[1];
                cout << "\nAttack done by " << player << "!" << endl;
                sleep_until(system_clock::now() + seconds(1));
                cout << "Inflicted " << pStats[1] << " damage! " << enemy << " is at " << eStats[0] << " health!" << endl;
                pStats[1] = pStats[1]/1.5;
                }
            }
        } else {
            continue;
        }
    } else {
        continue;
    }
    
    if(eStats[0] <= 0){
        eStats[3] = 0;
        break;
    }
    }


}
