#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

void battle(player, enemy, pStats, eStats);

string player = "Tyr";
string enemy = "Enemy";
int pStats[5] = {100, 25, 38, 50, 1};
int eStats[4] = {82, 12, 27, 1};

void battle (player, enemy, pStats, eStats) {
    string input = "";
    while(pStats[4] != 0 || eStats[3] != 0){
    cout << "What action would you like to perform?" << endl;
    cout << "Attack     Item     Defend" << endl;
    cin >> input
    if
    eStats[0] -= pStats[1]
    cout << "\nAttack done by " << player << "!" << endl;
    sleep_until(system_clock::now() + seconds(1));
    cout << "Inflicted " << pStats[1] << " damage! " << enemy << " is at " << eStats[0] << " health!" << endl;
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
}#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

void battle(player, enemy, pStats, eStats);

string player = "Tyr";
string enemy = "Enemy";
int pStats[5] = {100, 25, 38, 50, 1};
int eStats[4] = {82, 12, 27, 1};

void battle (player, enemy, pStats, eStats) {
    string input = "";
    while(pStats[4] != 0 || eStats[3] != 0){
    cout << "What action would you like to perform?" << endl;
    cout << "Attack     Item     Defend" << endl;
    cin >> input
    if
    eStats[0] -= pStats[1]
    cout << "\nAttack done by " << player << "!" << endl;
    sleep_until(system_clock::now() + seconds(1));
    cout << "Inflicted " << pStats[1] << " damage! " << enemy << " is at " << eStats[0] << " health!" << endl;
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