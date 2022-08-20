#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, aux;
    cin >> n;

    int max = 0;
    int secondMax, index;

    vector<int> bids;

    for (int i = 0; i < n; i++) {
        cin >> aux;
        if (aux > max) {
            max = aux;
            index = i+1;
        }
        bids.push_back(aux);
    }

    secondMax = 0;
    for (int i = 0; i < n; i++) {
        if (bids[i] > secondMax && i+1 != index) {
            secondMax = bids[i];
        }
    }

    cout << index << " " << secondMax << endl;

    return 0;
}