#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int camels, x, d, target1, target2;
    cin >> camels;

    bool spitHit = false;

    vector<int> positions;
    vector<int> distances;

    for (int i = 0; i < camels; i++) {
        cin >> x >> d;
        positions.push_back(x);
        distances.push_back(d);
    }

    for (int i = 0; i < camels; i++) {
        target1 = positions[i] + distances[i];
        for(int j = 0; j < camels; j++) {
            target2 = positions[j] + distances[j];
            if(positions[j] == target1 && target2 == positions[i]) {
                spitHit = true;
                break;
            }
        }
        if(spitHit) {
            break;
        }
    }

    if (spitHit) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}