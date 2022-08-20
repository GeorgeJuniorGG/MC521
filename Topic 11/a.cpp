#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;

    char aux;
    bool possible;

    for (int i = 0; i < t; i++) {
        cin >> n;
        
        possible = true;;

        int map[n][n];
        vector<pair<int,int>> ones;

        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                cin >> aux;
                if(aux == '0') {
                    map[j][k] = 0;
                }
                else {
                    map[j][k] = 1;
                }
                if(map[j][k] == 1) {
                    ones.push_back(make_pair(j,k));
                }
            }
        }

        for(int j = 0; j < ones.size(); j++) {
            if(ones[j].first == n - 1 || ones[j].second == n - 1) {
                continue;
            }
            else {
                int x = ones[j].first;
                int y = ones[j].second;

                if(map[x + 1][y] == 1 || map[x][y+1] == 1) {
                    continue;
                }
            }
        
            possible = false;
        }

        if(possible) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }   

    return 0;
}