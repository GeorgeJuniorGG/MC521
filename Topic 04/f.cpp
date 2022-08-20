#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int players[6];
    bool possible = false;
    int aux, teamA, teamB;

    for (int i = 0; i < 6; i++) {
        cin >> aux;
        players[i] = aux;
    }

    sort(players, players+6);

    do {
        if(players[0] + players[1] + players[2] == players[3] + players[4] + players[5]) {
            possible = true;
            break;
        }
    }while(next_permutation(players, players+6));

    if (possible) {
        cout << "YES" << endl;
    }

    else {
        cout << "NO" << endl;
    }

    return 0;
}