 #include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

void battle(player, enemy, pStats, eStats);

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

void battle (player, enemy, pStats, eStats) {
    string input = "";
    while(pStats[4] != 0 || eStats[3] != 0){
    cout << "What will Tyr do?" << endl;
    cout << "Attack     Skill     Item     Defend" << endl;
    cin >> input;
    if (input == "Attack" || input == "attack"){
        int crit = rand() % 10;
        if (crit = 10){
            pStats[1] = pStats[1]*1.5;
            eStats[0] -= pStats[1]
            cout << "\nAttack done by " << player << "!" << endl;
            sleep_until(system_clock::now() + seconds(1));
            cout << "Inflicted " << pStats[1] << " damage! " << bold_on << "It's a critical hit!!! " << bold_off << enemy << " is at " << eStats[0] << " health!" << endl;
            pStats[1] = pStats[1]/1.5;
        } else {
            eStats[0] -= pStats[1]
            cout << "\nAttack done by " << player << "!" << endl;
            sleep_until(system_clock::now() + seconds(1));
            cout << "Inflicted " << pStats[1] << " damage! " << enemy << " is at " << eStats[0] << " health!" << endl;
        }
    } else if (input == "Item" || input == "item"){
        cout << "Items: " << items << endl;
        cout << "Type one out to use, be back out, type anything not in the item list" << endl;
        string select = "";
        cin << select;
        if(select == "potion" || select == "Potion"){
            cout << "Potion: Heals 50 health to party member." << endl;
            cout << "Who will you use it on? Tyr or Thor?" << endl;
            string use = "";
            cin << use;
            if(use == "Tyr" || use == "tyr"){
                pStats[0] += 50;
            } else if (use == "Thor" || use == "thor"){
                aStats[0] += 50; 
            } else {
                continue;
            }
        } else if (select == "Ether" || select "ether"){
            cout << "Ether: Restores 20 skill points to party member." << endl;
            cout << "Who will you use it on? Tyr or Thor?" << endl;
            string use = "";
            cin << use;
            if(use == "Tyr" || use == "tyr"){
                pStats[3] += 20;
            } else if (use == "Thor" || use == "thor"){
                aStats[3] += 20; 
            } else {
                continue;
            }
        }
    } else if (input == "Skill" || input == "skill"){

    }
    
    if(eStats[0] <= 0){
        eStats[3] = 0;
        break;
    }

    one.updatehealth(one.attack, two.p2_health);
    one.p1_health -= two.attack;
    sleep_until(system_clock::now() + seconds(1));
    cout << "\nAttack done by " << two.gamerTag << "!" << endl;
    sleep_until(system_clock::now() + seconds(1));
    cout << "Inflicted " << two.attack << " damage! " << one.gamerTag << " is at " << one.p1_health << " health!" << endl;
    sleep_until(system_clock::now() + seconds(1));
    if(one.p1_health <= 0){
        one.alive = 0;
        break;
    }
    }

    if(one.alive = false){
        sleep_until(system_clock::now() + seconds(1));
        cout << two.gamerTag << " Wins! Here's your scores! Player 1: " << one.score << ", Player 2: " << two.score << endl;
    } else {
        sleep_until(system_clock::now() + seconds(1));
        cout << one.gamerTag << " Wins! Here's your scores! Player 1: " << one.score << ", Player 2: " << two.score << endl;
    }
}