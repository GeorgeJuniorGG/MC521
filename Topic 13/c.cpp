#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, aux;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        string colors;

        vector<int> tree;
        tree.push_back(-1);
        for (int j = 0; j < n-1; j++){
            cin >> aux;
            tree.push_back(aux);
        }
        
        cin >> colors;

        int black = 0;
        int white = 0;
        int count = 0;
        int prev;

        vector<int> blacks (n, 0);
        vector<int> whites (n, 0);

        for (int j = n - 1; j >= 1; j--) {
            black = blacks[j];
            white = whites[j];
            
            prev = tree[j]-1;
            if (colors[j] == 'B') {
                black ++;
            }
            else if (colors[j] == 'W') {
                white ++;
            }

            if (black == white) {
                count++;
            }
            blacks[prev] += black;
            whites[prev] += white;
        }

        black = blacks[0];
        white = whites[0];
        if (colors[0] == 'B') {
            black++;
        }
        else if (colors[0] == 'W') {
            white ++;
        }
        if(black == white) {
            count ++;
        }
        cout << count << endl;
    }

    return 0;
}